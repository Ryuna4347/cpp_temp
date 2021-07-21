/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:11:54 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:11:55 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("zombie");
	Zombie *new_two = newZombie("bkwag");
	Zombie *new_three = newZombie("hyunyoo");
	new_two->announce();
	new_three->announce();
	delete new_two;
	delete new_three;
	return 0;
}
