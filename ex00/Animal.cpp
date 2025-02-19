/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:04:12 by angerard          #+#    #+#             */
/*   Updated: 2025/02/19 15:48:02 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this= other;
    std::cout << "Animal copied" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "unknown animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
