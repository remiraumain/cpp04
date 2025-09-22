/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:36:52 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:14:10 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() 
{
    // Animal a;
    // Animal* pa = new Animal;

    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    AAnimal* zoo[4];
    for (int i = 0; i < 2; ++i) zoo[i] = new Dog();
    for (int i = 2; i < 4; ++i) zoo[i] = new Cat();

    for (int i = 0; i < 4; ++i) zoo[i]->makeSound();

    for (int i = 0; i < 4; ++i) delete zoo[i];

    return (0);
}

