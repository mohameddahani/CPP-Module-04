/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/20 12:50:03 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Character::Character(): name("Unknown name"){
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
    
    std::cout << "Default constructor of Character is called" << std::endl;
}

// * Parametrised constructor
Character::Character(std::string name): name(name){
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }

    std::cout << "Parametrised constructor of Character is called" << std::endl;
}    

// * Copy constructor with initializer list
Character::Character(const Character &other): name(other.name){
    // ! deep copy
    for (int i = 0; i < 4; i++){
        if (other.inventory[i]){
            this->inventory[i] = other.inventory[i]->clone();
        }
    }

    std::cout << "Copy constructor of Character is called" << std::endl;
}

// * Copy assignment operator
Character &Character::operator=(const Character &other){
    // ! deep copy
    for (int i = 0; i < 4; i++){
        if (other.inventory[i]){
            // ? what is clone well be called ? (cure or ice)
            this->inventory[i] = other.inventory[i]->clone();
        }
    }
    
    this->name = other.name;

    std::cout << "Copy assignment operator of Character is called" << std::endl;
    
    return *this;
}

// * Destructor
Character::~Character(){
    std::cout << "Character" << " is destroyed" << std::endl;
}

// * Setters & Getters
std::string const &Character::getName() const {
    return this->name;
}

// * Methods
void Character::equip(AMateria *m){
    if(!m){
        return;
    }

    for (int i = 0; i < 4; i++){
        if (!this->inventory[i]){
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx){
    if (idx < 0 || idx >= 4){
        return;
    }
    this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx >= 4 || !this->inventory[idx]){
        return;
    }

    this->inventory[idx]->use(target);
}
