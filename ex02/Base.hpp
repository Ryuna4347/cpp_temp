/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:46:11 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/27 15:23:03 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base *generate(void);
void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif
