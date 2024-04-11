/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:59 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/11 16:33:00 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
	DiamondTrap d1("Diamond1");
	std::cout << std::endl;

	std::cout << std::endl;
	d1.highFivesGuys();
	d1.guardGate();
	std::cout << std::endl;

	d1.whoAmI();
	std::cout << std::endl;
	d1.attack("MasterDiamond");	
	std::cout << std::endl;
	
	std::cout << "DiamondTrap " << d1.getName() << " have Hit Points: " << d1.getHitPoints() << ", Energy Points: " << d1.getEnergyPoints() << ", Attack Points: " << d1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}