#include "pet.h"
#include "dog.h"
#include "cat.h"
#include "fox.h"

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

Pet::Pet(const std::string& petName) : name(petName), advanceHour(true) {
    hunger = rand() % 50 + 1;
    sleepiness = rand() % 50 + 1;
    boredom = rand() % 50 + 1;
    happiness = rand() % 50 + 1;
}

void Pet::displayStatus() const {
    clearScreen();
    displayArt();
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hunger: " << hunger << "/100   Sleepiness: " << sleepiness << "/100" << std::endl;
    std::cout << "Boredom: " << boredom << "/100   Happiness: " << happiness << "/100" << std::endl;
    displayMessages();
}

void Pet::nextHour() {
    if (advanceHour) {
        if (hunger <= 40) {
            std::cout << name << " is hungry!" << std::endl;
        }

        if (sleepiness < 30) {
            std::cout << name << "Is really sleepy.. Maybe you should let them rest." << std::endl;
        }

        if (happiness > 0) {
            hunger = std::max(0, hunger - std::min(rand() % 5 + 1, hunger));
            sleepiness = std::max(0, sleepiness - std::min(rand() % 5 + 1, sleepiness));
            boredom = std::max(0, boredom - std::min(rand() % 5 + 1, boredom));
            happiness = std::max(0, happiness - std::min(rand() % 5 + 1, happiness));
        }
    }
}

void Pet::displayMessages() const {
    // Display's the messages based on the hunger, sleepiness, and boredom levels
    if (hunger <= 40) {
        std::cout << name << " is hungry!" << std::endl;
    }

    if (sleepiness < 30) {
        std::cout << name << " is really sleepy.. Maybe you should let them rest.." << std::endl;
    }
}

void Dog::rest() {
    sleepiness = std::min(100, sleepiness + 100);
    std::cout << name << " took a good ole nap." << std::endl;
}

void Cat::rest() {
    sleepiness = std::min(100, sleepiness + 100);
    std::cout << name << " took a good ole nap." << std::endl;
}

void Fox::rest() {
    sleepiness = std::min(100, sleepiness + 100);
    std::cout << name << " took a good ole nap." << std::endl;
}





void Pet::saveToFile(const std::string& filename) {
    advanceHour = false; // Disable stat changes
    std::ofstream file(filename);
    if (file.is_open()) {
        file << name << " " << hunger << " " << sleepiness << " " << boredom << " " << happiness << std::endl;
        file.close();
    }
    advanceHour = true; // Re-enable stat changes
}

void Pet::loadFromFile(const std::string& filename) {
    advanceHour = false; // Disable stat changes
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> name >> hunger >> sleepiness >> boredom >> happiness;
        file.close();
    }
    advanceHour = true; // Re-enable stat changes
}

Pet::~Pet() {}
