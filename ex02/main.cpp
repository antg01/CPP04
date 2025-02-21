/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:11:44 by angerard          #+#    #+#             */
/*   Updated: 2025/02/21 15:14:23 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const AAnimal* animals[10];

    // Remplir la moitié avec des chiens et l'autre avec des chats
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    std::cout << "------------" << std::endl;

    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    std::cout << "------------" << std::endl;

    // Appel de makeSound() pour vérifier le polymorphisme
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();
    std::cout << "------------" << std::endl;

    // Suppression des objets
    for (int i = 0; i < 4; i++)
        delete animals[i];
    std::cout << "------------" << std::endl;

    // Test des copies profondes
    Dog originalDog;
    originalDog.makeSound();
    std::cout << "------------" << std::endl;

    Dog copiedDog = originalDog;
    copiedDog.makeSound();

    return 0;
}
