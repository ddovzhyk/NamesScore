#include "NamesScore.h"
#include <fstream>

NamesScore::NamesScore() :
    m_score(0)
  , m_names()
{
}

void NamesScore::clearData()
{
    m_score = 0;
    if (m_names.size() != 0) {
        m_names.clear();
    }
}

bool NamesScore::readFile(const std::string &fullPath)
{
    std::ifstream inputFile(fullPath);
    std::string tempName;

    if (!inputFile.is_open())
    {
        std::cerr << "ERROR: Cannot open file!" << std::endl;
        return false;
    }

    while(std::getline(inputFile, tempName))
    {
        m_names.insert(std::move(tempName));
    }

    return true;
}

unsigned int NamesScore::calculateTotalScore()
{
    unsigned int pos = 1;

    for(auto it = m_names.begin(); it != m_names.end(); ++it, ++pos)
    {
        m_score += calculateNameSum(pos, *it);
    }

    return m_score;
}

unsigned int NamesScore::calculateNameSum(const unsigned int &position, const std::string &name)
{
    unsigned int result = 0;

    for(std::size_t i = 0, size = name.size(); i < size; ++i)
    {
        result += std::toupper(name[i]) - 'A' + 1;
    }

    return result * position;
}
