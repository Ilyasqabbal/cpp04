/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:36 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 06:06:18 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
  private :
    Brain *brain;
  public :
  Dog();
  ~Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &rf);
  void makeSound() const;
};

#endif