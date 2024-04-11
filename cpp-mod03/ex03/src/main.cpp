/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:59 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/08 16:51:53 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
	DiamondTrap d1("Diamond1");
	std::cout << std::endl;
	DiamondTrap d2(d1);
	std::cout << std::endl;

	ScavTrap s1("Scav1");
//	d1.setEnergyPoints(s1.getEnergyPoints());
	d2.setName("Diamond2");
//	d2.setEnergyPoints(s1.getEnergyPoints());
	std::cout << std::endl;
	d1.highFivesGuys();
	d2.guardGate();
	d1.whoAmI();
	d2.whoAmI();
	std::cout << std::endl;
/*
	d1.attack("FORD");	
	std::cout << std::endl;
	
	d2.whoAmI();
	d2.attack("ARTHUR");
	std::cout << std::endl;
	
*/

	std::cout << "DiamondTrap " << d1.getName() << " have Hit Points: " << d1.getHitPoints() << ", Energy Points: " << d1.getEnergyPoints() << ", Attack Points: " << d1.getAttackDamage() << std::endl;
	std::cout << "DiamondTrap " << d2.getName() << " have Hit Points: " << d2.getHitPoints() << ", Energy Points: " << d2.getEnergyPoints() << ", Attack Points: " << d2.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}