/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:45:44 by pviegas           #+#    #+#             */
/*   Updated: 2024/04/11 15:53:07 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../include/ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int _Energy_Points = 50;
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap&   operator=(const ScavTrap& copy);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};

#endif
