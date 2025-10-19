/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 10:08:38 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Character::Character(){
    std::cout << "Default constructor of Character is called" << std::endl;
}

// * Parametrised constructor
Character::Character(std::string name): name(name){
    std::cout << "Parametrised constructor of Character is called" << std::endl;
    
}    

// * Copy constructor with initializer list
Character::Character(const Character &other): name(other.name){
    // todo deep copy

    std::cout << "Copy constructor of Character is called" << std::endl;
}

// * Copy assignment operator
Character &Character::operator=(const Character &other){
    // todo deep copy

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
    for (int i = 0; i < 4; i++){
        if (this->inventory[i] == 0){
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx){
    // todo :
    // delete this->inventory[idx];
    this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target){
    // todo: ....
//    AMateria::use(target);
}
