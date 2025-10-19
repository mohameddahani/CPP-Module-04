/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 09:51:31 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
MateriaSource::MateriaSource(){
    std::cout << "Default constructor of MateriaSource is called" << std::endl;
}

// // * Parametrised constructor
// MateriaSource::MateriaSource(std::string name): name(name){
//     std::cout << "Parametrised constructor of MateriaSource is called" << std::endl;
    
// }    

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
// std::string const &MateriaSource::getName() const {
//     return this->name;
// }

// * Methods
// void MateriaSource::equip(AMateria *m){
//     for (int i = 0; i < 4; i++){
//         if (this->inventory[i] == 0){
//             this->inventory[i] = m;
//             break;
//         }
//     }
// }

// void MateriaSource::unequip(int idx){
//     this->inventory[idx] = 0;
// }

// void MateriaSource::use(int idx, IMateriaSource &target){
//     std::
// }

void MateriaSource::learnMateria(AMateria*){
    
}

AMateria *MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++){
        // if (type == this.)
        // {
        //     /* code */
        // }
        
    }
    
}
