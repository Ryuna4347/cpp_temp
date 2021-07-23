/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:43:46 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/23 13:51:29 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->value = fixed.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout<<"Assignation operator called"<<std::endl;
	this->value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->value;
}

void Fixed::setRawbits(int const raw)
{
	this->value = raw;
	std::cout<<"setRawBits member function called"<<std::endl;
}
