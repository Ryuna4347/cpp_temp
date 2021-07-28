/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:46:16 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/28 16:34:15 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include "Base.hpp"

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify_from_pointer(o);
		std::cout << ", ";
		identify_from_reference(*o);
		std::cout << std::endl;
		delete o;
	}
	std::cout << std::endl;
	return (0);
}
