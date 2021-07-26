/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:34:43 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:34:44 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *sources[4];
	int count;
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &materia);
	MateriaSource &operator=(MateriaSource const &materia);
	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);;
};

#endif
