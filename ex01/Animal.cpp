/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:14:00 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:33:26 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal constructed\n";
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy-constructed\n";

}

Animal	&Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Animal copy-assigned\n";
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructed\n";
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound\n";
}

const std::string	&Animal::getType(void) const
{
	return (_type);
}
