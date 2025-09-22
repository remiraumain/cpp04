/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:23:18 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:36:26 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Dog constructed\n";
}

Dog::Dog(const Dog &copy) : Animal(copy) 
{
	std::cout << "Dog copy-constructed\n";
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		Animal::operator=(copy);
	std::cout << "Dog copy-assigned\n";
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructed\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Wouaf Wouaf\n";
}
