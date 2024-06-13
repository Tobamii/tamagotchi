#include "cat.h"
#include <vector>    // for vector usage
#include <iostream>  // for standard input/output
#include <cstdlib>   // for system("clear") or system("cls")
#include <ctime>     // for time usage

Cat::Cat(const std::string& name) : Pet(name) {}

void Cat::displayArt() const {
    std::cout << "    /\\_/\\  ( " << std::endl;
    std::cout << "   ( ^.^ ) _) " << std::endl;
    std::cout << "     \\\"/  (" << std::endl;
    std::cout << "   ( | | )" << std::endl;
    std::cout << "  (__d b__)" << std::endl;
}

void Cat::feed() {
    hunger += 5;
    boredom -= 4;
    happiness += 3;
    sleepiness -= 2;
    
}

void Cat::play() {
    hunger -= 3;
    boredom += 3;
    happiness += 3;
    sleepiness -= 1;
    
    
}

void Cat::train() {
    hunger -=3;
    boredom += 3;
    happiness += 3;
    sleepiness -= 1;
  
}

