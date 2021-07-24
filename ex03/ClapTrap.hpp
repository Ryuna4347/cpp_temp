/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:12:58 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:12:58 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int HitPoint;
	unsigned int EnergyPoint;
	unsigned int AttackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& copy);
	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};

#endif
