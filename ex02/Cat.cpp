/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:35:53 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:13:41 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructed\n";
}

Cat::Cat(const Cat &copy) : AAnimal(copy) 
{
	*this = copy;
	std::cout << "Cat copy-constructed\n";
}

Cat	&Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		AAnimal::operator=(copy);
		*_brain = *copy._brain;
	}
	std::cout << "Cat copy-assigned\n";
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructed\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Miaou Miaou\n";
}

Brain	&Cat::getBrain(void)
{
	return (*_brain);
}