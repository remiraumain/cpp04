/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 22:07:55 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:02:41 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain constructed\n";
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain copy-constructed\n";
}

Brain	&Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; ++i)
			_ideas[i] = copy._ideas[i];
	}
	std::cout << "Brain copy-assigned\n";
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructed\n";
}

void	Brain::setIdea(const int index, const std::string &idea)
{
	if (index < 0 || index > 99)
	{
		std::cerr << "Index out of range\n";
		return ;
	}
	_ideas[index] = idea;
}

const std::string	&Brain::getIdea(const int index) const
{
	if (index < 0 || index > 99)
	{
		std::cerr << "Index out of range\n";
		return (_ideas[0]);
	}
	return (_ideas[index]);
}
