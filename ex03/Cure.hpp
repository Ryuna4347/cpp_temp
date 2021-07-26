/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:33:25 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:33:25 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure: public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const &cure);
	Cure &operator=(Cure const &cure);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
