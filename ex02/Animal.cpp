/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:30:09 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:30:19 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Constructor Animal" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Assignment Animal" << std::endl;
	this->type = copy.type;
	return *this;
}
