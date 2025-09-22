/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:36:52 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:00:07 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "\n==== Polymorphic destruction ====\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

	std::cout << "\n==== Copy ====\n";
    Dog d1;
	d1.getBrain().setIdea(0, "bone");

    Dog d2 = d1;
    d1.getBrain().setIdea(0, "I don’t want to set the world on fire");
    std::cout << "Dog d1 idea[0]: " << d1.getBrain().getIdea(0) << "\n";
    std::cout << "Dog d2 idea[0]: " << d2.getBrain().getIdea(0) << " (expected: bone)\n";

    Cat c1;
    c1.getBrain().setIdea(1, "fish");
    Cat c2;
    c2 = c1;
    c1.getBrain().setIdea(1, "milk");
    std::cout << "Cat c1 idea[1]: " << c1.getBrain().getIdea(1) << "\n";
    std::cout << "Cat c2 idea[1]: " << c2.getBrain().getIdea(1) << " (expected: fish)\n";

    return 0;
}
