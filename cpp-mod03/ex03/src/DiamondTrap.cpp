/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:46:06 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/01 16:38:57 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

// Parameterized Constructor
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap: Parameterized constructor called" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		std::cout << "DiamondTrap: Assignment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << getName() << " destroyed!" << std::endl;
}

//Member functions
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap: My name is " << getName() << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}