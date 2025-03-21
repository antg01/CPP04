/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:05:55 by angerard          #+#    #+#             */
/*   Updated: 2025/02/21 15:06:28 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other): AAnimal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other) {
        AAnimal::operator=(other);
        *brain = *other.brain;
    }
    return *this;;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "je woof bien là" << std::endl;
}
