/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:17:33 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:17:34 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *zombieList;

	zombieList = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		zombieList[i].setName(name);
	}
	return zombieList;
}
