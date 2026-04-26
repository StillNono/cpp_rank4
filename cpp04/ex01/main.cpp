#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    const int size = 10;
    Animal* animals[size];

    std::cout << "--- CRIANDO ARRAY DE ANIMAIS ---" << std::endl;
    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }
    std::cout << "\n--- TESTANDO DEEP COPY ---" << std::endl;
    Dog basic;
    {
        Dog tmp = basic; 
        std::cout << "Cópia temporária criada e será destruída ao sair do escopo." << std::endl;
    } 
    std::cout << "O 'basic' continua vivo com seu próprio cérebro!" << std::endl;

    std::cout << "\n--- ESTRUINDO ARRAY ---" << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    return 0;
}