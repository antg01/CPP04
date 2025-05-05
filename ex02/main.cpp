/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:11:44 by angerard          #+#    #+#             */
/*   Updated: 2025/05/05 13:15:29 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const AAnimal* animals[10];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    std::cout << "------------" << std::endl;

    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    std::cout << "------------" << std::endl;

    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();
    std::cout << "------------" << std::endl;

    for (int i = 0; i < 4; i++)
        delete animals[i];
    std::cout << "------------" << std::endl;

    // deeep copies test
    Dog originalDog;
    originalDog.makeSound();
    std::cout << "------------" << std::endl;

    Dog copiedDog = originalDog;
    copiedDog.makeSound();

    return 0;
}
