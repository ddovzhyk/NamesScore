#include "NamesScore.h"
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    NamesScore game;
    if (argc != 2) {
        std::cerr << "usage: ./namesScore [pathToInputFile]" << std::endl;
        return -1;
    }

    if (game.readFile("res/names.txt")) {
        std::cout << "Total score of names in the file: "
                  << game.calculateTotalScore() << std::endl;
    }
    return 0;
}
