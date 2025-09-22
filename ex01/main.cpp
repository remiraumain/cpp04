/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:36:52 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:31:22 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const std::size_t N = 4;
    Animal* animals[N];

    for (std::size_t i = 0; i < N; ++i) {
        if (i < N / 2) animals[i] = new Dog();
        else           animals[i] = new Cat();
    }

    Dog* d1 = static_cast<Dog*>(animals[0]);
	Dog* d2 = static_cast<Dog*>(animals[1]);
	d1->getBrain().setIdea(0, "bone");
	d2->getBrain().setIdea(0, "pizza");
	*d2 = *d1;
	d1->getBrain().setIdea(0, "milk");
	std::cout << "Dog 1: " << d1->getBrain().getIdea(0) << "\n";
	std::cout << "Dog 2: " << d2->getBrain().getIdea(0) << " (expected: bone)\n";

    for (std::size_t i = 0; i < N; ++i) {
        delete animals[i];
    }

    return 0;
}
