/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:33:47 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:33:50 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &ice);
		Ice &operator=(Ice const &ice);
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif
