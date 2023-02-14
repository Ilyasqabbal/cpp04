/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:33 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 08:44:21 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog():Animal("Dog")
{
    
    std::cout << "Dog constructor called" <<std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" <<std::endl;
}

Dog::Dog(const Dog &copy) :Animal("Dog")
{
    std::cout << "Cat copy constructor called !" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &rf)
{
    std::cout << "Cat copy assignment operator called !" << std::endl;
    if(this != &rf)
    {
        this->brain = new Brain();
        this->type = rf.type;
        *brain = *rf.brain;
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "wof wof wof" <<std::endl;
}