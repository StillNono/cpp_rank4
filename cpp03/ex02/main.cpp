#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
    std::cout << "--- 1. CRIAÇÃO DOS ROBÔS ---" << std::endl;
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");
    FragTrap frag("Fraggy");

    std::cout << "\n--- 2. TESTE DE STATUS INICIAIS ---" << std::endl;
    // FragTrap deve ter 100 HP e 30 de dano
    frag.attack("um boneco de treino");
    // ScavTrap deve ter 50 de energia e 20 de dano
    scav.attack("o mesmo boneco");
    // ClapTrap deve ter 10 de energia e 0 de dano
    clap.attack("o boneco (sem efeito)");

    std::cout << "\n--- 3. TESTE DE MÉTODOS EXCLUSIVOS ---" << std::endl;
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\n--- 4. TESTE DE COMBATE E REPARO ---" << std::endl;
    frag.takeDamage(50);
    frag.beRepaired(25);
    
    // Testando se o FragTrap morre ou fica sem energia
    std::cout << "Fraggy tenta gastar energia..." << std::endl;
    frag.takeDamage(150); // Deve morrer aqui
    frag.attack("inimigo"); // Não deve conseguir atacar
    frag.highFivesGuys();   // Mesmo morto ele pode falar, mas você pode travar isso no código se quiser

    std::cout << "\n--- 5. DESTRUIÇÃO (ORDEM REVERSA) ---" << std::endl;
    return 0;
}