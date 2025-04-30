/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:15:57 by angerard          #+#    #+#             */
/*   Updated: 2025/04/30 11:52:21 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "------" << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    std::cout << "------" << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    std::cout << "------ Wrong tests ------" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrong->getType() << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    wrong->makeSound();
    wrongCat->makeSound();

    std::cout << "------" << std::endl;
    delete meta;
    delete dog;
    delete cat;
    delete wrong;
    delete wrongCat;

    return 0;
}
