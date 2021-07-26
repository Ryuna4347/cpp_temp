/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:28:08 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:28:08 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Constructor Dog" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Dog" << std::endl;
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Assignment Dog" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "Bow wow!" << std::endl;
}
