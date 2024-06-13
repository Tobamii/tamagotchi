#include "pet.h"
#include "cat.h"
#include "fox.h"
#include "dog.h"
#include <iostream>
#include <cstdlib>


void displayMenu();

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
  
    

    std::cout << "A far cry was heard from a distance..." << std::endl;
  std::cout << "A pet acquaintance greets you, will you become their companion?" << std::endl;
  std::cout << "Welcome to...  " << std::endl;
 std::cout << "_____     _____   ________      " << std::endl;
 std::cout << "(  __ \\   / ___/  (___  ___)   "  << std::endl;
 std::cout <<  ") )_) ) ( (__        ) )       "   << std::endl;
 std::cout << "(  ___/   ) __)      ( (        "  << std::endl;
 std::cout <<  ") )     ( (          ) )       "  << std::endl;
 std::cout << "( (       \\ \\___     ( (      " << std::endl;
 std::cout <<"/__\\       \\____\\    /__\\    "  << std::endl;

  std::cout << "_____      ____     _____  " << std::endl;
  std::cout << "(  __ \\    (    )   (_   _)" << std::endl;
  std::cout << ") )_) )    / /\\ \\    | | " << std::endl;
  std::cout << "(  ___/   ( (__) )     | |" << std::endl;
  std::cout << ") )        )    (      | |   __  " << std::endl;
  std::cout << "( (       /  /\\  \\  _| |___) ) " << std::endl;
  std::cout << "/__\\     /__(  )__\\ \\________/ " << std::endl;


  std::cout << " _,-._" << std::endl;
  std::cout << "/ \\_/ \\" << std::endl;
  std::cout << ">-(_)-< "  << std::endl;
  std::cout << "\\_/ \\_/" << std::endl;
  std::cout << "`-'`-'`" << std::endl;

  
  
    std::cout << "1. Start A New Pal! " << std::endl;
    std::cout << "2. Load an Existing Pal!" << std::endl;

    int startChoice;
    std::cout << "Enter your choice: ";
    std::cin >> startChoice;

    Pet* pet;

    if (startChoice == 1) {
        std::string petName;
        std::cout << "Choose a Pal type! (Dog, Cat, Fox):\n";
        std::cout << "  ";
        std::cout << "Dog: A loyal playful companion. Gains happiness fast, moderate hunger rate, gets bored easily, and sleeps often.\n";
      std::cout << "  ";
        std::cout << "Cat: A calm yet cunning companion. Gains happiness lower than other pals, low hunger rate, doesn't get bored easily, and requires less sleep.\n";
      std::cout << "  ";
        std::cout << "Fox: A unique and mystical companion. Gains happiness fast, high hunger rate, doesn't get bored easily, yet requires more sleep.\n";
      std::cout << "  ";
        std::string petType;
        std::cin >> petType;

        std::cout << "Enter a name for your new pal!: ";
        std::cin >> petName;

        if (petType == "Dog") {
            pet = new Dog(petName);
        } else if (petType == "Cat") {
            pet = new Cat(petName);
        } else if (petType == "Fox") {
            pet = new Fox(petName);
        } else {
            std::cerr << "Invalid pet type!" << std::endl;
            return 1;
        }
    } else if (startChoice == 2) {
        pet = new Dog("Default");
        pet->loadFromFile("save.txt");
        std::cout << "Pet loaded!" << std::endl;
    } else {
        std::cerr << "Invalid choice!" << std::endl;
        return 1;
    }

    int choice;
    do {
        pet->displayStatus();
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                pet->feed();
                break;
            case 2:
                pet->play();
                break;
            case 3:
                pet->train();
                break;
            case 4:
                pet->rest();
                break;
            case 5:
                pet->saveToFile("save.txt");
                std::cout << "Game saved!" << std::endl;
                break;
            case 6:
                pet->loadFromFile("save.txt");
                std::cout << "Game loaded!" << std::endl;
                break;
            case 7:
                std::cout << "Exiting the game." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }

        pet->nextHour();

    } while (choice != 7);

    delete pet;

    return 0;
}

void displayMenu() {
    std::cout << "1. Feed" << std::endl;
    std::cout << "2. Play" << std::endl;
    std::cout << "3. Train" << std::endl;
    std::cout << "4. Rest"  << std::endl;
    std::cout << "5. Save" << std::endl;
    std::cout << "6. Load" << std::endl;
    std::cout << "7. Exit" << std::endl;
    
}
