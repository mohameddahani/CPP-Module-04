/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:49 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/17 20:46:18 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Dog::Dog(): mind(new Brain()){
    this->type = "Dog";
    std::cout << "Default constructor of Dog is called" << std::endl;
}

// * Copy constructor with initializer list
Dog::Dog(const Dog &other): Animal(other), mind(new Brain(*other.mind)){
    std::cout << "Copy constructor of Dog is called" << std::endl;
}

// * Copy assignment operator
Dog &Dog::operator=(const Dog &other){
    type = other.type;
    
    std::cout << "Copy assignment operator of Dog is called" << std::endl;
        
    return *this;
}

// * Destructor
Dog::~Dog(){
    delete this->mind;
    
    std::cout << "Dog" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
void Dog::makeSound() const {
    std::cout << "Woof 🐶" << std::endl;
}
