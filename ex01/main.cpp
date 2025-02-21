/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:01:48 by angerard          #+#    #+#             */
/*   Updated: 2025/02/21 11:26:56 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* animals[10];

    // Remplir la moitié avec des chiens et l'autre avec des chats
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    std::cout << "------------" << std::endl;

    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    std::cout << "------------" << std::endl;

    // Suppression et appel des destructeurs
    for (int i = 0; i < 4; i++)
        delete animals[i];
    std::cout << "------------" << std::endl;

    // Test des copies profondes
    Dog originalDog;
    originalDog.makeSound();

    Dog copiedDog = originalDog;
    copiedDog.makeSound();
    std::cout << "------------" << std::endl;

    Cat originalCat;
    originalCat.makeSound();

    Cat copiedCat = originalCat;
    copiedCat.makeSound();
    std::cout << "------------" << std::endl;

    return 0;
}
