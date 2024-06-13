#ifndef PET_H
#define PET_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

class Pet {
protected:
    std::string name;
    int hunger;
    int sleepiness;
    int boredom;
    int happiness;
    bool advanceHour;
    void nextHour(bool shouldAdvanceHour);
    void displayMessages()const;

public:
    Pet(const std::string& petName);
    virtual void displayArt() const = 0;
    virtual void feed() = 0;
    virtual void play() = 0;
    virtual void train() = 0;
    void displayStatus() const;
    void nextHour();
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
    virtual ~Pet();
    virtual void rest() = 0;
    
    
    
};


#endif // PET_H
