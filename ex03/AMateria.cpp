/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:32:45 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:32:46 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type(""),_xp(0)
{
	std::cout<<"Default Constructor AMateria"<<std::endl;
}

AMateria::AMateria(std::string const & type):_type(type),_xp(0)
{
	std::cout<<"Constructor AMateria"<<std::endl;
}

AMateria::~AMateria()
{
	std::cout<<"Destructor AMateria"<<std::endl;
}

AMateria::AMateria(const AMateria &character)
{
	std::cout<<"Copy AMateria"<<std::endl;
	this->_xp = character._xp;
}

AMateria &AMateria::operator=(AMateria const &character)
{
	std::cout<<"Copy AMateria"<<std::endl;
	this->_xp = character._xp;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
} //Returns the materia type

unsigned int AMateria::getXP() const  //Returns the Materia's XP
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
