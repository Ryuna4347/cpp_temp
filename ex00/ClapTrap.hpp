/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:11:09 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:11:09 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int HitPoint;
	unsigned int EnergyPoint;
	unsigned int AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
