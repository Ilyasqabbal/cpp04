/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 08:21:43 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" <<std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" <<std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
    std::cout << "Cat copy constructor called !" << std::endl;
    *this = copy;
    
}
Cat &Cat::operator=(const Cat &rf)
{
    std::cout << "Cat copy assignment operator called !" << std::endl;
    if(this != &rf)
    {
        this->brain = new Brain();
        this->type = rf.type;
        *brain = *rf.brain;
    }
    return (*this);
}
void Cat::makeSound() const
{
    std::cout << "meow meow meow meow" <<std::endl;
}