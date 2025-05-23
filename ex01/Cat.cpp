/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:55:42 by angerard          #+#    #+#             */
/*   Updated: 2025/05/05 11:10:50 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "je miaul de ouf" << std::endl;
}

void Cat::setIdea(int i, const std::string &idea)
{
    if (brain != NULL)
    {
        brain->setIdea(i, idea);
    }
}

std::string Cat::getIdea(int i) const
{
    if (brain != NULL)
    {
        return brain->getIdea(i);
    }
    return "";
}
