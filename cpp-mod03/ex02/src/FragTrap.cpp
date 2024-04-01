/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:46:06 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/01 15:54:52 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	ClapTrap::setName("No name");
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(100);
	ClapTrap::setAttackDamage(30);
}

// Parameterized Constructor
FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap: Parameterized constructor called" << std::endl;
	ClapTrap::setName(name);
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(100);
	ClapTrap::setAttackDamage(30);
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		std::cout << "FragTrap: Assignment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return (*this);
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << getName() << " destroyed!" << std::endl;
}

//Member functions
void FragTrap::highFivesGuys()
{
	std::cout << "High Five Time!!!" << std::endl;
}
