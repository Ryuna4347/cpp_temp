/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:12:03 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:12:03 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& copy);
	void attack(const std::string &target);
	void guardGate();
};

#endif
