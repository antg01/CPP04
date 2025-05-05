/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:35:53 by angerard          #+#    #+#             */
/*   Updated: 2025/05/05 11:02:46 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copied" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int i, const std::string &idea)
{
    if (i >= 0 && i < 100) {
        ideas[i] = idea;
    }
}

std::string Brain::getIdea(int i) const
{
    if (i >= 0 && i < 100) {
        return ideas[i];
    }
    return "";
}
