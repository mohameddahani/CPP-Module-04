/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:49 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 16:03:22 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Dog::Dog(){
    this->type = "Dog";
    std::cout << "Default constructor of Dog is called" << std::endl;
}

// * Copy constructor with initializer list
Dog::Dog(const Dog &other): Animal(other){
    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
Dog &Dog::operator=(const Dog &other){
    type = other.type;
    
    std::cout << "Copy assignment operator called" << std::endl;
        
    return *this;
}

// * Destructor
Dog::~Dog(){
    std::cout << "Dog" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
void Dog::makeSound() const {
    std::cout << "Woof 🐶" << std::endl;
}
