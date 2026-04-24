#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Serelepe");
    ClapTrap clap("Ribeirinho");

    scav.attack("Handsome Jack");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();
    //clap.guardGate();

    return 0;
}