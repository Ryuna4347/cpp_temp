/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:18:51 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/22 14:44:43 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon; //외부에서 무기의 setType 호출 시 변경되도록
	std::string name;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif
