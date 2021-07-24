/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:12:27 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/24 18:12:28 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	void highFivesGuys(void);
};

#endif
