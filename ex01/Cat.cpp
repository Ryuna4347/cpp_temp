/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:29:20 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:29:21 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Constructor Cat" << std::endl;
}
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat" << std::endl;
	this->type = copy.type;
	delete brain;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignment Cat" << std::endl;
	this->type = copy.type;
	delete brain;
	this->brain = new Brain(*copy.brain);
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

Brain *Cat::getBrain() const
{
	return this->brain;
}
