/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:36:52 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:59:16 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	{
		std::cout << "\n==== Stack objects ====\n";
		Animal a;
		Dog d;
		Cat c;

		std::cout << "\n==== makeSound() direct ====\n";
		a.makeSound();
		d.makeSound();
		c.makeSound();

		std::cout << "\n==== Polymorphism via Animal* ====\n";
		Animal* zoo[3] = { new Animal(), new Dog(), new Cat() };
		for (int i = 0; i < 3; ++i) {
			std::cout << "type=" << zoo[i]->getType() << " -> ";
			zoo[i]->makeSound();
		}
		for (int i = 0; i < 3; ++i) 
			delete zoo[i];

		std::cout << "\n==== Copy constructor ====\n";
		Dog d2(d);
		Cat c2(c);

		std::cout << "\n==== Assignment operator ====\n";
		d2 = d;
		c2 = c;
	}

	std::cout << "\n==== WrongAnimal polymorphism (cassé) ====\n";
    WrongAnimal* wa = new WrongAnimal();
    WrongAnimal* wc = new WrongCat();

    std::cout << wa->getType() << " -> "; wa->makeSound();
    std::cout << wc->getType() << " -> "; wc->makeSound();
    delete wa;
    delete wc;

    return (0);
}
