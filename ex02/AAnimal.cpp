/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:01:14 by angerard          #+#    #+#             */
/*   Updated: 2025/02/21 15:04:45 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
    std::cout << "AAnimal constructed" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
    std::cout << "AAnimal copied" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destroyed" << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}
