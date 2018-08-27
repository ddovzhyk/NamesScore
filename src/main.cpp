#include "NamesScore.h"
#include <iostream>
#include <fstream>
int main()
{
    NamesScore game;

    std::cout << "Total score of names in the file: "
              << game.calculateTotalScore("res/names.txt") << std::endl;

    return 0;
}
