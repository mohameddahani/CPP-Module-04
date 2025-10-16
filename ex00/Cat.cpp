/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:21 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 16:02:53 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Cat::Cat(){
    this->type = "Cat";

    std::cout << "Default constructor of Cat is called" << std::endl;
}

// * Copy constructor with initializer list
Cat::Cat(const Cat &other): Animal(other){
    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
Cat &Cat::operator=(const Cat &other){
    type = other.type;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
Cat::~Cat(){
    std::cout << "Cat" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
void Cat::makeSound() const {
    std::cout << "Meow 🐱" << std::endl;
}