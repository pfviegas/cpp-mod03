/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:46:06 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/01 16:41:21 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

// Default Constructor
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	ClapTrap::setName("No name");
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(50);
	ClapTrap::setAttackDamage(20);
}

// Parameterized Constructor
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: Parameterized constructor called" << std::endl;
	ClapTrap::setName(name);
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(50);
	ClapTrap::setAttackDamage(20);
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		std::cout << "ScavTrap: Assignment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << getName() << " destroyed!" << std::endl;
}

//Member functions
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap guardGate activated!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		std::cout << getName() << " is already dead!!! " << std::endl;
		return;
	}

	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}
