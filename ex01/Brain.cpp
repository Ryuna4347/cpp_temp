/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:29:12 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 13:29:13 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"🥱",
		"🥵",
		"😢",
		"😱",
		"🥶",
		"🤯",
		"🤩",
		"🥰",
		"🥳",
		"🥴",
		"🤤",
		"🤢",
		"🤧",
		"🤮",
		"🤡",
		"🤠",
		"🤥",
		"🤤",
	};
	std::cout << "Constructor Brain"<<std::endl;
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
	}
}
Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Copy Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int idx)
{
	return (this->ideas[idx]);
}
