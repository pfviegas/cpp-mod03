


#include "../include/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	setName("No Name");
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);	
}

// Parameterized Constructor
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parameterized constructor called" << std::endl;
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
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
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
	std::cout << "Destructor called" << std::endl;
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
	this->_name = name;
}

void ClapTrap::setHitPoints(const int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(const int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(const int attackDamage)
{
	this->_attackDamage = attackDamage;
}

//Member functions
void ClapTrap::attack(const std::string& target)
{
	if (!getHitPoints() || !getEnergyPoints() || !getAttackDamage())
	{
		std::cout << getName() << " failed to attack " << target << std::endl;
		return;
	}
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;

	setEnergyPoints(getEnergyPoints() - 1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() and getEnergyPoints())
	{
		std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
		setHitPoints(getHitPoints() - amount);
		if (getHitPoints() <= 0)
			std::cout << "ClapTrap " << getName() << " is dead!!! " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() and getEnergyPoints())
	{
		std::cout << "ClapTrap " << getName() << " get " << amount << " health points!" << std::endl;
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << " is dead!!! " << std::endl;
}
