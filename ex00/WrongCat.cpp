/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:21 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 17:20:07 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
WrongCat::WrongCat(){
    this->type = "WrongCat";

    std::cout << "Default constructor of WrongCat is called" << std::endl;
}

// * Copy constructor with initializer list
WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other){
    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
WrongCat &WrongCat::operator=(const WrongCat &other){
    type = other.type;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
WrongCat::~WrongCat(){
    std::cout << "WrongCat" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
void WrongCat::makeSound() const {
    std::cout << "Meow 🐱" << std::endl;
}