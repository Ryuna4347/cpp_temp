/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:18:28 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 21:32:54 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << str << " " << &str << std::endl;
	std::cout << *stringPTR << " " << &stringPTR << std::endl;
	std::cout << stringREF << " " << &stringREF <<std::endl;
	return 0;
}
