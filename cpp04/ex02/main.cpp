#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    // 1. TESTE DE ABSTRAÇÃO
    // Se você descomentar a linha abaixo, o código NÃO deve compilar.
    // const Animal* test = new Animal(); 
    
    const int size = 4;
    Animal* animals[size];

    std::cout << "--- CRIANDO ANIMAIS ---" << std::endl;
    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\n--- TESTANDO SONS ---" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << animals[i]->getType() << " faz: ";
        animals[i]->makeSound();
    }

    std::cout << "\n--- LIMPANDO MEMÓRIA ---" << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }

    return 0;
}