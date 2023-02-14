/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:30 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 06:01:52 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    private:
      Brain* brain;
    public :
  Cat();
  ~Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &rf);
  void makeSound() const;
};

#endif
