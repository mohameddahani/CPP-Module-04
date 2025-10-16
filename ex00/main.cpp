/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 17:37:34 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
    // * Origin Animal, Dog, Cat
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    // * Wrong Animal, Wrong Cat
    std::cout << "==============================================" << std::endl;
    
    const WrongAnimal* l9anou3 = new WrongAnimal();;
    const WrongAnimal* yellowCat = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    yellowCat->makeSound();
    l9anou3->makeSound();

    delete l9anou3;
    delete yellowCat;

    return 0;
}