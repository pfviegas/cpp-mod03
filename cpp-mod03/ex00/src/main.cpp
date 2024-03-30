

#include "../include/ClapTrap.hpp"

int main()
{

	ClapTrap claptrap1("Tiny Tina");
	claptrap1.setAttackDamage(50);

	ClapTrap claptrap2(claptrap1);

	ClapTrap claptrap3("Roland");

	claptrap3 = claptrap2;

	claptrap1.attack("Roland");
	claptrap2.takeDamage(20);

	claptrap2.attack("Roland");
	claptrap3.takeDamage(30);

	claptrap3.beRepaired(15);

	std::cout << "ClapTrap " << claptrap1.getName() << " have Hit Points: " << claptrap1.getHitPoints() << ", Energy Points: " << claptrap1.getEnergyPoints() << ", Attack Points: " << claptrap1.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << claptrap2.getName() << " have Hit Points: " << claptrap2.getHitPoints() << ", Energy Points: " << claptrap2.getEnergyPoints() << ", Attack Points: " << claptrap2.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << claptrap3.getName() << " have Hit Points: " << claptrap3.getHitPoints() << ", Energy Points: " << claptrap3.getEnergyPoints() << ", Attack Points: " << claptrap3.getAttackDamage() << std::endl;

	return 0;
}