/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:46:29 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:57:43 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat constructed\n";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) 
{
	std::cout << "WrongCat copy-constructed\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		WrongAnimal::operator=(copy);
	std::cout << "WrongCat copy-assigned\n";
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructed\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Miaou Miaou\n";
}
