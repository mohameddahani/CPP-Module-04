/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:11:02 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 17:15:05 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
WrongAnimal::WrongAnimal(){
    std::cout << "Default constructor of WrongAnimal is called" << std::endl;
}

// * Copy constructor with initializer list
WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type){
    
    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    this->type = other.type;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal" << " is destroyed" << std::endl;
}

// * Setters & Getters
std::string WrongAnimal::getType() const{
    return this->type;
}

// * Methods
void WrongAnimal::makeSound() const {
    std::cout << "Generic WrongAnimal sound" << std::endl;
}
