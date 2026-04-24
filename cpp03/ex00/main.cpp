#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap clap("CL4P-TP");

    clap.attack("Handsome Jack");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- Teste de Energia ---" << std::endl;
    for (int i = 0; i < 10; i++) {
        clap.attack("um inimigo qualquer");
    }

    clap.beRepaired(10);
    clap.attack("alguém");

    std::cout << "\n--- Teste de HP zero ---" << std::endl;
    ClapTrap dead("Defunto");
    dead.takeDamage(20);
    dead.attack("alvo");

    return 0;
}