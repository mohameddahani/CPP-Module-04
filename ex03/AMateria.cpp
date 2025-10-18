/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/18 17:22:48 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
AMateria::AMateria(){
    this->type = "Unknown";

    std::cout << "Default constructor of AMateria is called" << std::endl;
}

// * Parametrised constructor
AMateria::AMateria(std::string const & type): type(type){
    std::cout << "Parametrised constructor of AMateria is called" << std::endl;
    
}    

// * Copy constructor with initializer list
AMateria::AMateria(const AMateria &other): type(other.type){
    std::cout << "Copy constructor of AMateria is called" << std::endl;
}

// * Copy assignment operator
AMateria &AMateria::operator=(const AMateria &other){
    type = other.type;

    std::cout << "Copy assignment operator of AMateria is called" << std::endl;
    
    return *this;
}

// * Destructor
AMateria::~AMateria(){
    std::cout << "AMateria" << " is destroyed" << std::endl;
}

// * Setters & Getters
std::string const &AMateria::getType() const {
    return this->type;
}

// * Methods
void AMateria::use(ICharacter &target){
    std::cout << "* Random action to " << target << " * 🃏" << std::endl;
}
