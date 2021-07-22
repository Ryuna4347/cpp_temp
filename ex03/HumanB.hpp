/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:19:08 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/22 14:44:08 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon *weapon);
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
