/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:03 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/09 10:47:09 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{

	ClapTrap claptrap1("Tiny Tina");
	std::cout << std::endl;
	
	claptrap1.setAttackDamage(50);
	std::cout << std::endl;
	
	ClapTrap claptrap2(claptrap1);
	std::cout << std::endl;
	
	ClapTrap claptrap3("Athena");
	std::cout << std::endl;
	
	claptrap3 = claptrap2;
	std::cout << std::endl;
	
	claptrap1.attack("Athena");
	claptrap3.takeDamage(claptrap1.getAttackDamage());
	std::cout << std::endl;

	claptrap2.attack("Athena");
	claptrap3.takeDamage(claptrap2.getAttackDamage());
	std::cout << std::endl;

	claptrap2.setName("Mad Moxxi");
	std::cout << std::endl;

	claptrap2.beRepaired(15);
	std::cout << std::endl;

	std::cout << "ClapTrap " << claptrap1.getName() << " have Hit Points: " << claptrap1.getHitPoints() << ", Energy Points: " << claptrap1.getEnergyPoints() << ", Attack Points: " << claptrap1.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << claptrap2.getName() << " have Hit Points: " << claptrap2.getHitPoints() << ", Energy Points: " << claptrap2.getEnergyPoints() << ", Attack Points: " << claptrap2.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << claptrap3.getName() << " have Hit Points: " << claptrap3.getHitPoints() << ", Energy Points: " << claptrap3.getEnergyPoints() << ", Attack Points: " << claptrap3.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}