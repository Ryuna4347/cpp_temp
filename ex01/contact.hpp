/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:43:42 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 11:43:43 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	private:
		int index;
		std::string			informations[5];
		enum Field {
			FirstName = 0,
			LastName,
			Nickname,
			Phonenumber,
			DarkestSecret
		};
	public:
		Contact();
		~Contact();
		void display_simple();
		void display();
		Contact &operator=(const Contact& op);
		void add(int count);
		void search(Contact contacts[], int count);
};

#endif
