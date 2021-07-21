/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:12:21 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:12:21 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> " << "is Died" << std::endl;
}

Zombie::Zombie(std::string name)
:name(name)
{
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
