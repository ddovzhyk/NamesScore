# Names Score
Program gets a text file containing names as a command-line argument, and sort the names into alphabetical order.
Then work out the alphabetical value for each name and multiply this value by its position in the list to obtain a name score.
The result is the sum of all the name scores.
## Getting Started
### Prerequisites
* Any C++ compiler
* CMake version 3.0 or later
* Boost library for testing framework

### Installing on Ubuntu
```bash
$ git clone https://github.com/ddovzhyk/NamesScore.git
$ cd NamesScore
$ cmake .
$ make all
```
## Running the program
For example, 10Names.txt is an input file.
```bash
$ ./namesScore res/10Names.txt
```
## Running the tests
```bash
$ ./unit_tests --log_level=message
```
