#include <iostream>
#include <set>

class NamesScore
{
public:
    NamesScore() = default;
    NamesScore(const NamesScore &) = default;
    NamesScore& operator=(const NamesScore &) = default;

public:
    bool readFile(const std::string &fullPath);
    unsigned int calculateTotalScore();

private:
    unsigned int calculateNameSum(const std::string &name);

private:
    unsigned int m_score;
    std::multiset<std::string> names;

};
