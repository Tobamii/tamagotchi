#ifndef DOG_H
#define DOG_H

#include "pet.h"

class Dog : public Pet {
private:
    int stars; // New member variable to keep track of stars


class Dog : public Pet {
public:
    Dog(const std::string& name);
    void displayArt() const override;
    void feed() override;
    void play() override;
    void train() override;
    void rest() override;
    void playTrainingGame();
};

#endif // DOG_H
