/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:44:14 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 11:44:15 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int count;
	public:
		Phonebook();
		~Phonebook();
		void add();
		void search();
};

#endif
