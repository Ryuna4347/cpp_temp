/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:28:00 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:28:00 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignment Cat" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string Cat::getType() const
{
	return this->type;
}

void Cat::makeSound() const
{
	std::cout << "Meow~ Meow-" << std::endl;
}
