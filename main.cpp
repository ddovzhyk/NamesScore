#include "NamesScore.h"
#include <iostream>

int main()
{
    NamesScore game;

    game.readFile("names.txt");
    std::cout << "Total score of names in the file: "
              << game.calculateTotalScore() << std::endl;

    return 0;
}
