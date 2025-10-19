/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 11:10:47 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Ice::Ice(){
    this->type = "ice";

    std::cout << "Default constructor of Ice is called" << std::endl;
}   

// * Copy constructor with initializer list
Ice::Ice(const Ice &other){
    this->type = other.type;
    
    std::cout << "Copy constructor of Ice is called" << std::endl;
}

// * Copy assignment operator
Ice &Ice::operator=(const Ice &other){
    this->type = other.type;
    
    std::cout << "Copy assignment operator of Ice is called" << std::endl;
    
    return *this;
}

// * Destructor
Ice::~Ice(){
    std::cout << "Ice" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
AMateria *Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
