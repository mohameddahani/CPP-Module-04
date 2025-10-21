/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:21 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:32:01 by mdahani          ###   ########.fr       */
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
    std::cout << "Copy constructor of WrongCat is called" << std::endl;
}

// * Copy assignment operator
WrongCat &WrongCat::operator=(const WrongCat &other){
    type = other.type;

    std::cout << "Copy assignment operator of WrongCat is called" << std::endl;
    
    return *this;
}

// * Destructor
WrongCat::~WrongCat(){
    std::cout << "WrongCat" << " is destroyed" << std::endl;
}

// * Methods
void WrongCat::makeSound() const {
    std::cout << "Meow 🐱" << std::endl;
}