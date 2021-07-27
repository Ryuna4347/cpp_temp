/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/27 15:23:03 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error occurred" << std::endl;
	}
	else
	{
		Scalar scalar(argv[1]);
		scalar.Print();
	}
}
