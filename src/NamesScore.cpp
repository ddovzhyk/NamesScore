#include "NamesScore.h"
#include <fstream>

NamesScore::NamesScore() :
    m_score(0)
  , m_names()
{
}

void NamesScore::readFile(const std::string &fullPath)
{
    std::ifstream inputFile(fullPath);
    std::string tempName;

    if (!inputFile.is_open())
    {
        std::cerr << "ERROR: Cannot open file!" << std::endl;
        std::exit(-1);
    }

    while(std::getline(inputFile, tempName))
    {
        m_names.insert(std::move(tempName));
    }
}

unsigned int NamesScore::calculateTotalScore(const std::string &fullPath)
{
    unsigned int pos = 1;

    readFile(fullPath);
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
