/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:51 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 06:24:36 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int N;
    N = 100;
    Animal *animal[N];
    
    int half = N  / 2;
    
    std::cout << half;
    for(int i = 0; i < half ;i++)
    {
        animal[i] = new Dog();
    }
    
    for(int i = 0; i < half ;i++)
    {
        animal[i + half] = new Cat();
    }
    int counter;
    for (int i = 0;  i < N ; i++)
    {
        counter = i + 1;
        std::cout << counter << ") - " << animal[i]->getType() << std::endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete animal[i];
    }
    
    return 0;
}