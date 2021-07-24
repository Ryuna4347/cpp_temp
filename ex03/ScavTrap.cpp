/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:14:22 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:14:22 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor ScavTrap" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor ScavTrap" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "<ScavTrap> " << this->name << " attacks "
			  << target << ", causing " << this->AttackDamage
			  << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap changes to GuardGate mode." << std::endl;
}
