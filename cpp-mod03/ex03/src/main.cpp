/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:59 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/04 01:16:13 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{

	DiamondTrap d1("Diamond1");
	std::cout << std::endl;

	DiamondTrap d2("Diamond1");
	std::cout << std::endl;

	DiamondTrap d3(d1);
	std::cout << std::endl;
 
	d1.highFivesGuys();
	d1.guardGate();
	d1.whoAmI();
	d1.attack("FORD");	
	std::cout << std::endl;
	
	d2.whoAmI();
	d2.attack("ARTHUR");
	std::cout << std::endl;
	
	d3.whoAmI();
	std::cout << std::endl;

	std::cout << "DiamondTrap " << d1.getName() << " have Hit Points: " << d1.getHitPoints() << ", Energy Points: " << d1.getEnergyPoints() << ", Attack Points: " << d1.getAttackDamage() << std::endl;
	std::cout << "DiamondTrap " << d2.getName() << " have Hit Points: " << d2.getHitPoints() << ", Energy Points: " << d2.getEnergyPoints() << ", Attack Points: " << d2.getAttackDamage() << std::endl;
	std::cout << "DiamondTrap " << d3.getName() << " have Hit Points: " << d3.getHitPoints() << ", Energy Points: " << d3.getEnergyPoints() << ", Attack Points: " << d3.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}