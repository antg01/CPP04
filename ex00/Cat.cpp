/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:10:37 by angerard          #+#    #+#             */
/*   Updated: 2025/02/19 15:15:20 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
    *this = other;
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "je miaow" << std::endl;
}
