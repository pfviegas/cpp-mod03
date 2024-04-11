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
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

// Parameterized Constructor
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name  + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap: Parameterized constructor called" << std::endl;
	setName(name);
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::_Energy_Points);
	setAttackDamage(FragTrap::getAttackDamage());
}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ScavTrap(other), FragTrap(other)
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
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;
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
	std::cout << "DiamondTrap: My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}