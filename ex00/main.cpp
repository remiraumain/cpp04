/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:36:52 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 23:37:13 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    Animal a;
    Dog d;
    Cat c;

    a.makeSound();
    d.makeSound();
    c.makeSound();

    Animal* p1 = new Dog();
    Animal* p2 = new Cat();
    p1->makeSound();
    p2->makeSound();
    delete p1;
    delete p2;

    Dog d2(d);
    d2.makeSound();
    Dog d3;
    d3 = d2;
    d3.makeSound();

    Cat c2(c);
    c2.makeSound();
    Cat c3;
    c3 = c2;
    c3.makeSound();

    WrongAnimal* wa = new WrongAnimal();
    WrongAnimal* wc = new WrongCat();
    std::cout << wa->getType() << " -> "; wa->makeSound();
    std::cout << wc->getType() << " -> "; wc->makeSound();
    delete wa;
    delete wc;

    return (0);
}
