/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 11:10:05 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Cure::Cure(){
    this->type = "cure";

    std::cout << "Default constructor of Cure is called" << std::endl;
}   

// * Copy constructor with initializer list
Cure::Cure(const Cure &other){
    this->type = other.type;
    
    std::cout << "Copy constructor of Cure is called" << std::endl;
}

// * Copy assignment operator
Cure &Cure::operator=(const Cure &other){
    this->type = other.type;
    
    std::cout << "Copy assignment operator of Cure is called" << std::endl;
    
    return *this;
}

// * Destructor
Cure::~Cure(){
    std::cout << "Cure" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
