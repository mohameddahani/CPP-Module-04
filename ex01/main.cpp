/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 16:06:10 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }

    // std::cout << "===========================================" << std::endl;

    // {
    //     Animal *hayawan[4];
    //     for (int i = 0; i < 4; i++){
    //         if (i < 2){
    //             hayawan[i] = new Dog();
    //         } else {
    //             hayawan[i] = new Cat();
    //         }
    //     }

    //     // * Make Sound
    //     for (int i = 0; i < 4; i++){
    //         hayawan[i]->makeSound();
    //     }
        
    //     // * Free the array of animal
    //     for (int i = 0; i < 4; i++){
    //         delete hayawan[i];
    //     }
    // }

    // std::cout << "===========================================" << std::endl;

    // {
    //     // * Without pointer (Object Slicing)
    //     Animal monster[2];
    //     for (int i = 0; i < 2; i++){
    //         if (i < 1){
    //             monster[i] = Dog();
    //         }
    //         monster[i] = Cat();
    //     }

    //     // * Make Sound
    //     for (int i = 0; i < 2; i++){
    //         monster[i].makeSound();
    //     }
    // }
    
    return 0;
}