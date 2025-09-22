/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:35:53 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:36:21 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	std::cout << "Cat constructed\n";
}

Cat::Cat(const Cat &copy) : Animal(copy) 
{
	std::cout << "Cat copy-constructed\n";
}

Cat	&Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		Animal::operator=(copy);
	std::cout << "Cat copy-assigned\n";
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructed\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Miaou Miaou\n";
}
