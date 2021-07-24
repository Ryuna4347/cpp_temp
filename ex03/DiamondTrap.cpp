/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:13:47 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:13:48 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap(),FragTrap()
{
	std::cout << "Default constructor DiamondTrap" << std::endl;
	this->name = "";
	this->HitPoint = this->FragTrap::HitPoint;
	this->EnergyPoint = this->ScavTrap::EnergyPoint;
	this->AttackDamage = this->FragTrap::AttackDamage;
	this->ClapTrap::name = "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name),ScavTrap(name), FragTrap(name) 
{
	std::cout << "Constructor DiamondTrap" << std::endl;
	this->name = name;
	this->HitPoint = this->FragTrap::HitPoint;
	this->EnergyPoint = this->ScavTrap::EnergyPoint;
	this->AttackDamage = this->FragTrap::AttackDamage;
	this->ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << " clapTrap name is " << this->ClapTrap::name << std::endl;
}
