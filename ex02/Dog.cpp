/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:23:18 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:13:54 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : AAnimal(), _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog constructed\n";
}

Dog::Dog(const Dog &copy) : AAnimal(copy), _brain(new Brain())
{
	*this = copy;
	std::cout << "Dog copy-constructed\n";
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		AAnimal::operator=(copy);
		*_brain = *copy._brain;
	}
	std::cout << "Dog copy-assigned\n";
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructed\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Wouaf Wouaf\n";
}

Brain	&Dog::getBrain(void)
{
	return (*_brain);
}
