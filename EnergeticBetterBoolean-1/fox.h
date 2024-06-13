#ifndef FOX_H
#define FOX_H

#include "pet.h"

class Fox : public Pet {
public:
    Fox(const std::string& name);
    void displayArt() const override;
    void feed() override;
    void play() override;
    void train() override;
    void rest() override;
    
}; 

#endif // FOX_H
