/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:51 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/13 07:14:08 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





//cat



//dog

//WrongAnimal







/*int main()
{
    //tester Animal
    Animal a1("hero");
    Animal a2(a1);
    Animal a3;
    a3 = a2;
    
    a1.getType();
    a1.makeSound();
    
    Cat cat;
    cat.makeSound();
    Dog dog;
    dog.makeSound();
    //virtual bal inheritance 5edam Nadi 
    //virtual function
    //virtual destructor
    
}*/

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal *meta = new Animal();

    const Animal *j = new Dog();
    const Animal *i= new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();
    
    //test Wronganimal
    const WrongAnimal *meta1 = new WrongAnimal();
    const WrongAnimal *i1= new WrongCat();
    std::cout << i1->getType() << " " << std::endl; 
    i1->makeSound(); //will output the cat sound! 
    meta1->makeSound();


    delete meta;
    delete j;
    delete i;
    
    delete meta1;
    delete i1;
    return 0;

}
    
