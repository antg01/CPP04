/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:46:43 by angerard          #+#    #+#             */
/*   Updated: 2025/05/05 11:10:35 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other) {
        Animal::operator=(other);
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

void Dog::setIdea(int i, const std::string &idea)
{
    if (brain != NULL)
    {
        brain->setIdea(i, idea);
    }
}

std::string Dog::getIdea(int i) const
{
    if (brain != NULL)
    {
        return brain->getIdea(i);
    }
    return "";
}
