/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:19:22 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:49:36 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  {
    Weapon *club = new Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club->setType("some other type of club");
    bob.attack();
    delete club;
  }
  {
    Weapon *club = new Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club->setType("some other typsdf of club");
    jim.attack();
    delete club;
  }
}
