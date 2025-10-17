/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:11:02 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/17 09:48:36 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Animal::Animal(){
    std::cout << "Default constructor of Animal is called" << std::endl;
}

// * Copy constructor with initializer list
Animal::Animal(const Animal &other): type(other.type){
    
    std::cout << "Copy constructor of Animal is called" << std::endl;
}

// * Copy assignment operator
Animal &Animal::operator=(const Animal &other){
    this->type = other.type;

    std::cout << "Copy assignment operator of Animal is called" << std::endl;
    
    return *this;
}

// * Destructor
Animal::~Animal(){
    std::cout << "Animal" << " is destroyed" << std::endl;
}

// * Setters & Getters
std::string Animal::getType() const{
    return this->type;
}

// * Methods
void Animal::makeSound() const {
    std::cout << "Generic animal sound" << std::endl;
}
