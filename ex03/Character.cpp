/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:32:57 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:32:57 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():name("")
{
	std::cout<<"Default Constructor Character"<<std::endl;
}

Character::Character(std::string name) : name(name)
{
	std::cout<<"Constructor Character"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::~Character()
{
	std::cout<<"Destructor Character"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != 0)
		{
			delete this->inventory[i];
		}
	}
}

Character::Character(const Character &character)
{
	std::cout<<"Copy Character"<<std::endl;
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
			this->equip(character.inventory[i]->clone());
	}
}

Character &Character::operator=(Character const &character)
{
	std::cout<<"= operator Character"<<std::endl;
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
			this->inventory[i] = character.inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if (m == 0)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return;
	if (this->inventory[idx])
	{
		this->inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return;
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
}
