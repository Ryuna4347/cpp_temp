/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:12:38 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:17:09 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *array = ZombieHorde(10, "zombie");

	for(int i=0; i < 10; i++)
	{
		array[i].announce();
	}
	delete[] array;
	return 0;
}
