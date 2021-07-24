/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:10:25 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:10:26 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondtrap("diamond");

	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	diamondtrap.attack("hyunyoo");
	diamondtrap.beRepaired(10);
	diamondtrap.takeDamage(10);
	diamondtrap.whoAmI();
	return 0;
}
