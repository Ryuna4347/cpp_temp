/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:33:37 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:33:37 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout<<"Default Constructor Ice"<<std::endl;
}

Ice::~Ice()
{
	std::cout<<"Constructor Ice"<<std::endl;
}

Ice::Ice(Ice const &ice):AMateria(ice)
{

	std::cout<<"Copy Ice"<<std::endl;
	this->_xp = ice.getXP();
}

Ice &Ice::operator=(Ice const &ice)
{
	std::cout<<"= Operator Ice"<<std::endl;
	this->_xp = ice.getXP();
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
