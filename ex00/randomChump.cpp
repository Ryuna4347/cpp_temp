/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:12:14 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:12:15 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <random>

void randomChump(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	delete zombie;
}
