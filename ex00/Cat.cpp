/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 05:58:39 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" <<std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" <<std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
    std::cout << "Cat copy constructor called !" << std::endl;  
    this->type = copy.type;
    //*this = copy;
}

Cat &Cat::operator=(const Cat &rf)
{
    std::cout << "Cat copy assignment operator called !" << std::endl;
    if(this != &rf)
    {
        this->type = rf.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow meow" <<std::endl;
}