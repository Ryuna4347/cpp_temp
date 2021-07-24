/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:12:32 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:12:33 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("fragtrap");

	frag.highFivesGuys();
	frag.attack("bkwag");
	frag.beRepaired(10);
	frag.takeDamage(10);
	return 0;
}
