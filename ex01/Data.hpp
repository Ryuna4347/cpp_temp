/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:24:59 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/28 16:33:33 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
private:
	std::string str1;
	std::string str2;
	int num;

public:
	Data();
	Data(std::string str1, std::string str2, int num);
	~Data();
	Data(const Data &other);
	Data &operator=(const Data &president);
	std::string getStr1() const;
	std::string getStr2() const;
	int getNum() const;
};
uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
