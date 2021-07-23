/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:44:22 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/23 14:09:53 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(float const val)
{
	std::cout<<"float constructor called"<<std::endl;
	this->value = roundf(val * (1 << Fixed::bit));
}

Fixed::Fixed(int const val)
{
	std::cout<<"int constructor called"<<std::endl;
	this->value = val << Fixed::bit;
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

std::ostream &operator<<(std::ostream &out, Fixed const &output)
{
	out << output.toFloat();
	return out;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << Fixed::bit);
}

int Fixed::toInt(void) const
{
	return this->value >> Fixed::bit;
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
