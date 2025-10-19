/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 16:23:55 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
MateriaSource::MateriaSource(){
    std::cout << "Default constructor of MateriaSource is called" << std::endl;
}  

// * Copy constructor with initializer list
MateriaSource::MateriaSource(const MateriaSource &other){
    // todo deep copy

    std::cout << "Copy constructor of MateriaSource is called" << std::endl;
}

// * Copy assignment operator
MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    // todo deep copy

    // this->name = other.name;

    std::cout << "Copy assignment operator of MateriaSource is called" << std::endl;
    
    return *this;
}

// * Destructor
MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods

void MateriaSource::learnMateria(AMateria *m){
    if (!m){
        return;
    }
    m->clone();
}

AMateria *MateriaSource::createMateria(std::string const &type){
    if (type == "ice"){
        return new Ice();
    } else if (type == "cure"){
        return new Cure();
    }
    return NULL;
}
