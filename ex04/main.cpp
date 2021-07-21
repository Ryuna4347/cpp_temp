/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:25:01 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/21 22:07:59 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string str, std::string prev, std::string next)
{
	std::string new_line = "";
	int i = 0;

	while (true)
	{
		if((i = str.find(prev, 0)) == -1)
		{
			new_line += str.substr(0);
			return new_line;
		}
		else
		{
			new_line += str.substr(0, i);
			new_line += next;
			i += prev.length();
			str = str.substr(i);
		}
	}
}

int main(int argc, char *argv[])
{
	std::fstream read_fs;
	std::fstream write_fs;


	if (argc != 4)
	{
		std::cout<<" Wrong argc "<<std::endl;
		return 0;
	}
	std::string fname(argv[1]);
	std::string prev(argv[2]);
	std::string next(argv[3]);

	if(!prev.length() || !next.length())
		return 0;
	read_fs.open(argv[1], std::fstream::in);
	if(read_fs.is_open())
	{
		write_fs.open(fname + ".replace", std::fstream::out | std::ios::trunc);
		while (!read_fs.eof())
		{
			std::string str;
			getline(read_fs, str);
			write_fs << ft_replace(str, prev, next);
			write_fs << '\n';
		}
		read_fs.close();
		write_fs.close();
	}
	else
		std::cout<<"Can't read file"<<std::endl;
}