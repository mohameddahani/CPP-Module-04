/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/17 20:47:01 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *hayawan[4];
    for (int i = 0; i < 4; i++){
        if (i < 2){
            hayawan[i] = new Dog();
        } else {
             hayawan[i] = new Cat();
        }
    }

    // * Make Sound
    for (int i = 0; i < 4; i++){
            hayawan[i]->makeSound();
    }
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    // * Free the array of animal
    for (int i = 0; i < 4; i++){
        delete hayawan[i];
    }
    return 0;
}