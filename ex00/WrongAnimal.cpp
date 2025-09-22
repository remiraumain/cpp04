/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:45:01 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:45:21 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy-constructed\n";

}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "WrongAnimal copy-assigned\n";
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructed\n";
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound\n";
}

const std::string	&WrongAnimal::getType(void) const
{
	return (_type);
}
