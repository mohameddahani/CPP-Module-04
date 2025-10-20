/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/20 09:58:35 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
ICharacter::ICharacter(){
    std::cout << "Default constructor of ICharacter is called" << std::endl;
}  

// * Copy constructor with initializer list
ICharacter::ICharacter(const ICharacter &other){
    (void)other;

    std::cout << "Copy constructor of ICharacter is called" << std::endl;
}

// * Copy assignment operator
ICharacter &ICharacter::operator=(const ICharacter &other){
    (void)other;

    std::cout << "Copy assignment operator of ICharacter is called" << std::endl;
    
    return *this;
}

// * Destructor
ICharacter::~ICharacter(){
    std::cout << "ICharacter" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
