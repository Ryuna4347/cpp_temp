/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:23:54 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/28 16:33:33 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data data("a", "b", 1);

	uintptr_t iPtr = serialize(&data);
	Data *dPtr = deserialize(iPtr);

	std::cout
		<< "a : " << data.getStr1() << std::endl
		<< "b : " << data.getStr2() << std::endl
		<< "1 : "
		<< data.getNum() << std::endl;

	std::cout
		<< "a : "
		<< dPtr->getStr1() << std::endl
		<< "b : "
		<< dPtr->getStr2() << std::endl
		<< "1 : "
		<< dPtr->getNum() << std::endl;

	return (0);
}
