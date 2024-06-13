#include "fox.h"
#include <vector>    // for vector usage
#include <iostream>  // for standard input/output
#include <cstdlib>   // for system("clear") or system("cls")
#include <ctime>     // for time usage

Fox::Fox(const std::string& name) : Pet(name) {}

void Fox::displayArt() const {
    std::cout << "____    |\\/| " << std::endl;
    std::cout << "\\  /\\   / ..__." << std::endl;
    std::cout << " \\/  \\__\\   _/    " << std::endl;
    std::cout << "  \\__   __  \\_  " << std::endl;
    std::cout << "     \\____\\___\\  " << std::endl;
}

void Fox::feed() {
    hunger += 5;
    boredom -= 3;
    happiness += 5;
    sleepiness -= 5;
    
}

void Fox::play() {
    hunger -= 5;
    boredom += 5;
    happiness += 5;
    sleepiness -= 5;
    std::cout << "You played with " << name << "!" << std::endl;
}

void Fox::train() {
    hunger -= 5;
    boredom +=5; 
    happiness += 4;
    sleepiness -= 4;
    std::cout << "You trained " << name << "!" << std::endl;
}


