/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:01:48 by angerard          #+#    #+#             */
/*   Updated: 2025/05/05 11:13:00 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 4;
    const Animal* animals[size];

    int i = 0;
    while (i < size / 2)
    {
        animals[i] = new Dog();
        i = i + 1;
    }
    while (i < size)
    {
        animals[i] = new Cat();
        i = i + 1;
    }

    std::cout << "------------ DELETION -----------" << std::endl;

    i = 0;
    while (i < size)
    {
        delete animals[i];
        i = i + 1;
    }

    std::cout << "------------ DEEP COPY TEST -----------" << std::endl;

    Dog basicDog;
    basicDog.makeSound();
    basicDog.getType();

    basicDog.setIdea(0, "Tue le chat");
    basicDog.setIdea(1, "creuse un trou");

    Dog copiedDog;
    copiedDog = basicDog;

    std::cout << "Original Dog Idea 0: " << basicDog.getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea 0: " << copiedDog.getIdea(0) << std::endl;

    copiedDog.setIdea(0, "je veux miam");

    std::cout << "Modified Copied Dog Idea 0: " << copiedDog.getIdea(0) << std::endl;
    std::cout << "Original Dog Idea 0 (should be unchanged): " << basicDog.getIdea(0) << std::endl;

    std::cout << "------------ CAT DEEP COPY TEST -----------" << std::endl;

    Cat originalCat;
    originalCat.setIdea(0, "je veux dodo");

    Cat copyCat(originalCat);

    std::cout << "Original Cat Idea 0: " << originalCat.getIdea(0) << std::endl;
    std::cout << "Copy Cat Idea 0: " << copyCat.getIdea(0) << std::endl;

    copyCat.setIdea(0, "Tue la souris");

    std::cout << "Modified Copy Cat Idea 0: " << copyCat.getIdea(0) << std::endl;
    std::cout << "Original Cat Idea 0 (should be unchanged): " << originalCat.getIdea(0) << std::endl;

    return 0;
}

