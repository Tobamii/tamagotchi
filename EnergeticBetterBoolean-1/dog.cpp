#include "dog.h"
#include <cstdlib>   // for system("clear") or system("cls")
#include <vector>    // for vector usage
#include <iostream>  // for standard input/output
#include <ctime> 

void clearScreen();

void Dog::playTrainingGame() {
    clearScreen();
    std::vector<std::string> thoughts = {"stick", "squirrel", "ball"};
    std::string correctAnswer = thoughts[std::rand() % thoughts.size()];
    std::cout << "Welcome to the training game!\n";
    std::cout << "Your dog is thinking of something...\n\n";
    std::string userGuess;
    std::cout << "Can you guess what it is thinking of? ";
    std::cin >> userGuess;
    if (userGuess == correctAnswer) {
        std::cout << "Congratulations! You guessed correctly!\n";
        stars++; // Increment stars if guessed correctly
    } else {
        std::cout << "Sorry, that's not quite right. Better luck next time!\n";
    }
}

Dog::Dog(const std::string& name) : Pet(name) {}

void Dog::displayArt() const {
    std::cout << " _     /)---(\\   " << std::endl;
    std::cout << " \\\\   (/ . . \\)" << std::endl;
    std::cout << "  \\\\__)-\\(*)/ " << std::endl;
    std::cout << "  \\_       (_     " << std::endl;
    std::cout << " (___/-(____)"  << std::endl;
}

void Dog::feed() {
    hunger += 5 ;
    boredom -= 8;
    happiness += 5;
    sleepiness -= 4;
    
}

void Dog::play() {
    boredom += 5;
    happiness += 8;
    sleepiness -= 8;
    hunger -= 4;
  
}

void Dog::train() {
    playTrainingGame(); // Call the new method for the guessing game
    happiness += 8;
    boredom += 5;
    sleepiness -= 8;
    hunger -= 4;
}

