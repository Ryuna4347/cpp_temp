/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:31:21 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:31:22 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Constructor WrongCat" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy WrongCat" << std::endl;
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignment WrongCat" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string WrongCat::getType() const
{
	return this->type;
}
