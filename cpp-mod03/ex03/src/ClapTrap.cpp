/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:52 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/08 16:53:49 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

// Parameterized Constructor
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap created!" << std::endl;
	setName(name);
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		std::cout << "Assignment operator called" << std::endl;
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << this->_name << " destroyed!" << std::endl;
}

// Getters
std::string ClapTrap::getName(void) const
{
	return (_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

// Setters
void ClapTrap::setName(const std::string name)
{
	std::cout << "ClapTrap " << this->_name << " set his name to " << name << "."<< std::endl;
	this->_name = name;
}

void ClapTrap::setHitPoints(const int hitPoints)
{
	std::cout << "ClapTrap " << this->_name << " set Hit Points to " << hitPoints << "."<< std::endl;
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(const int energyPoints)
{
	std::cout << "ClapTrap " << this->_name << " set Energy Points to " << energyPoints << "."<< std::endl;
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(const int attackDamage)
{
	std::cout << "ClapTrap " << this->_name << " set Attack Damage to " << attackDamage << " Points."<< std::endl;
	this->_attackDamage = attackDamage;
}

//Member functions
void ClapTrap::attack(const std::string& target)
{
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already destroyed!!!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already destroyed!!!" << std::endl;
		return;
	}
	if (getHitPoints() and getEnergyPoints())
	{
		std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
		setHitPoints(getHitPoints() - amount);
		if (getHitPoints() <= 0)
			std::cout << "ClapTrap " << getName() << " is destroyed!!! " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already destroyed!!!" << std::endl;
		return;
	}
	if (getHitPoints() and getEnergyPoints())
	{
		std::cout << "ClapTrap " << this->_name << " get " << amount << " health points!" << std::endl;
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
}
