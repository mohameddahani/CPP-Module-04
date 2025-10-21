/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:21 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:30:49 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Cat::Cat(): mind(new Brain()){
    this->type = "Cat";

    std::cout << "Default constructor of Cat is called" << std::endl;
}

// * Copy constructor with initializer list
Cat::Cat(const Cat &other): Animal(other), mind(new Brain(*other.mind)){
    std::cout << "Copy constructor of Cat is called" << std::endl;
}

// * Copy assignment operator
Cat &Cat::operator=(const Cat &other){
    type = other.type;

    // ! deep copy
    *this->mind = *other.mind;

    std::cout << "Copy assignment operator of Cat is called" << std::endl;
    
    return *this;
}

// * Destructor
Cat::~Cat(){
    delete this->mind;

    std::cout << "Cat" << " is destroyed" << std::endl;
}

// * Methods
void Cat::makeSound() const {
    std::cout << "Meow 🐱" << std::endl;
}