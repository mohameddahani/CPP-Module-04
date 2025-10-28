/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/28 13:49:34 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Character::Character(): name("Unknown name"), unequippedMateriaList(0){
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
    
    std::cout << "Default constructor of Character is called" << std::endl;
}

// * Parametrised constructor
Character::Character(std::string name): name(name), unequippedMateriaList(0){
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
    // ! free all alloaction memory
    for (int i = 0; i < 4; i++){
        if (this->inventory[i]){
            delete this->inventory[i];
        }
    }

    // ! free the unequip materia
    t_unequipMateria *tmp;
    while (this->unequippedMateriaList){
        tmp = this->unequippedMateriaList->next;
        delete this->unequippedMateriaList->content;
        delete this->unequippedMateriaList;
        this->unequippedMateriaList = tmp;
    }
    
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

    // * check if the materia all ready equip
    for (int i = 0; i < 4; i++){
        if (this->inventory[i] == m){
            return ;
        }
    }

    // * equip the materia
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

    // * Create new node
    t_unequipMateria *newNode = new t_unequipMateria;
    newNode->content = this->inventory[idx];
    newNode->next = NULL;
    
    // * clear Materia
    this->inventory[idx] = 0;

    // * check if the node is empty
    if (!this->unequippedMateriaList) {
        this->unequippedMateriaList = newNode;
        return;
    }
    
    // * add the materia on the last node
    t_unequipMateria *tmp = this->unequippedMateriaList;
    while (tmp->next)
        tmp = tmp->next;

    tmp->next = newNode;
}

void Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx >= 4 || !this->inventory[idx]){
        return;
    }

    this->inventory[idx]->use(target);
}
