#include <iostream>
#include <set>

class NamesScore
{
public:
    NamesScore();
    NamesScore(const NamesScore &) = default;
    NamesScore& operator=(const NamesScore &) = default;

public:
    unsigned int calculateTotalScore(const std::string &fullPath);

private:
    void readFile(const std::string &fullPath);
    unsigned int calculateNameSum(const unsigned int &position, const std::string &name);

private:
    unsigned int m_score;
    std::multiset<std::string> m_names;

};
