/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:11:14 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:11:14 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Clap");

	clap.attack("Enemy");
	clap.beRepaired(10);
	clap.takeDamage(10);
	return 0;
}
