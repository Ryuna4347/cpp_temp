/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:11:24 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:11:25 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name(""),HitPoint(10),EnergyPoint(10),AttackDamage(0)
{
	std::cout<<"Default constructor ClapTrap"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Constructor ClapTrap"<<std::endl;
	this->name = name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor ClapTrap"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "Claptrap " << this->name << " attacks "
	<< target << ", causing " << this->AttackDamage
	<< " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	this->HitPoint -= amount;
	std::cout <<  this->name << " is attacked! " << amount
	<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->HitPoint += amount;
	std::cout << this->name << " has Recovered by " << amount
	<< " points! Now "<< this->HitPoint << "HP" << std::endl;
}
