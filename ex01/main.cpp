/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:11:38 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:11:40 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("scav");

	scav.guardGate();
	scav.attack("bkwag");
	scav.beRepaired(10);
	scav.takeDamage(10);
	return 0;
}
