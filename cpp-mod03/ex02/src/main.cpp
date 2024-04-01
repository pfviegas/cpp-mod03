/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:59 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/01 15:57:25 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main()
{

	ClapTrap clap1("Mad Moxxi");
	std::cout << std::endl;

	FragTrap frag1("FRAG-TP1");
	std::cout << std::endl;

	frag1.highFivesGuys();
	std::cout << std::endl;
	
	FragTrap frag2(frag1);
	frag2.setName("FRAG-TP2");
	frag2.beRepaired(2);
	frag2.setAttackDamage(500);
	std::cout << std::endl;
	
	frag2.attack("SC4V-TP");
	std::cout << std::endl;

	frag1.takeDamage(500);
	std::cout << std::endl;

	frag2.ClapTrap::attack("Mad Moxxi");
	std::cout << std::endl;
	
	clap1.takeDamage(500);
	std::cout << std::endl;

	clap1.attack("SC4V-TP2");
	std::cout << std::endl;

	frag1.attack("SC4V-TP2");
	std::cout << std::endl;

	std::cout << "ClapTrap " << clap1.getName() << " have Hit Points: " << clap1.getHitPoints() << ", Energy Points: " << clap1.getEnergyPoints() << ", Attack Points: " << clap1.getAttackDamage() << std::endl;
	std::cout << "FragTrap " << frag1.getName() << " have Hit Points: " << frag1.getHitPoints() << ", Energy Points: " << frag1.getEnergyPoints() << ", Attack Points: " << frag1.getAttackDamage() << std::endl;
	std::cout << "FragTrap " << frag2.getName() << " have Hit Points: " << frag2.getHitPoints() << ", Energy Points: " << frag2.getEnergyPoints() << ", Attack Points: " << frag2.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}