/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:14:00 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:33:26 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << "AAnimal constructed\n";
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	std::cout << "AAnimal copy-constructed\n";

}

AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "AAnimal copy-assigned\n";
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructed\n";
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal sound\n";
}

const std::string	&AAnimal::getType(void) const
{
	return (_type);
}
