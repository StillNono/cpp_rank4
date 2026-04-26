#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string _type;
public:
    WrongAnimal();
    ~WrongAnimal(); // SEM VIRTUAL
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);

    void makeSound() const; // SEM VIRTUAL
    std::string getType() const;
};

#endif