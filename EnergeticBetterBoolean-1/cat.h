#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat : public Pet {
public:
    Cat(const std::string& name);
    void displayArt() const override;
    void feed() override;
    void play() override;
    void train() override;
    void rest() override;
    
};

#endif // CAT_H
