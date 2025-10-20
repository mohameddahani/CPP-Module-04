/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/20 16:07:18 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++){
        this->inventorySource[i] = 0;
    }

    std::cout << "Default constructor of MateriaSource is called" << std::endl;
}  

// * Copy constructor with initializer list
MateriaSource::MateriaSource(const MateriaSource &other){
    // ! deep copy
    for (int i = 0; i < 4; i++){
        if (other.inventorySource[i]){
            this->inventorySource[i] = other.inventorySource[i]->clone();
        }
    }

    std::cout << "Copy constructor of MateriaSource is called" << std::endl;
}

// * Copy assignment operator
MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    // ! deep copy
    for (int i = 0; i < 4; i++){
        if (other.inventorySource[i]){
            this->inventorySource[i] = other.inventorySource[i]->clone();
        }
    }

    std::cout << "Copy assignment operator of MateriaSource is called" << std::endl;
    
    return *this;
}

// * Destructor
MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (this->inventorySource[i]){
            delete inventorySource[i];
        }
    }

    std::cout << "MateriaSource" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods

void MateriaSource::learnMateria(AMateria *m){
    if (!m){
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (!this->inventorySource[i]){
            this->inventorySource[i] = m->clone();
            break;
        }
        
    }
}

AMateria *MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++){
        if (this->inventorySource[i]->getType() == type){
            return this->inventorySource[i]->clone();
        }
    }
    return 0;
}
