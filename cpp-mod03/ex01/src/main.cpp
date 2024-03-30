

#include "../include/ScavTrap.hpp"

int main()
{

	ClapTrap clap1("Mad Moxxi");
	std::cout << std::endl;

	ScavTrap scav1("SC4V-TP");
	std::cout << std::endl;

	scav1.guardGate();
	std::cout << std::endl;
	
	ScavTrap scav2(scav1);
	scav2.setName("SC4V-TP2");
	scav2.beRepaired(2);
	scav2.setAttackDamage(500);
	std::cout << std::endl;
	
	scav2.attack("SC4V-TP");
	std::cout << std::endl;

	scav1.takeDamage(500);
	std::cout << std::endl;

	scav2.ClapTrap::attack("Mad Moxxi");
	std::cout << std::endl;
	
	clap1.takeDamage(500);
	std::cout << std::endl;

	clap1.attack("SC4V-TP2");
	std::cout << std::endl;

	scav1.attack("SC4V-TP2");
	std::cout << std::endl;

	// clap2.attack("Athena");
	// std::cout << std::endl;

	// clap2.setName("Mad Moxxi");
	// std::cout << std::endl;

	// clap3.takeDamage(30);
	// std::cout << std::endl;

	// clap3.beRepaired(15);
	// std::cout << std::endl;

	std::cout << "ClapTrap " << clap1.getName() << " have Hit Points: " << clap1.getHitPoints() << ", Energy Points: " << clap1.getEnergyPoints() << ", Attack Points: " << clap1.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << scav1.getName() << " have Hit Points: " << scav1.getHitPoints() << ", Energy Points: " << scav1.getEnergyPoints() << ", Attack Points: " << scav1.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << scav2.getName() << " have Hit Points: " << scav2.getHitPoints() << ", Energy Points: " << scav2.getEnergyPoints() << ", Attack Points: " << scav2.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}