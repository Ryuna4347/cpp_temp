/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:14:04 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:14:04 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout<<"Default constructor FragTrap"<<std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout<<"Constructor FragTrap"<<std::endl;
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout<<"Destructor FragTrap"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& copy):ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "✋ Let's high-five guys~!!" << std::endl;
}
