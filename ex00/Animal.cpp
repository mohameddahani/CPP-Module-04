/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:11:02 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/14 13:56:15 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
ClapTrap::ClapTrap(): name("unknown"), hitPoints(10),
        energyPoints(10), attackDamage(0){
    std::cout << "Default constructor of ClapTrap is called" << std::endl;
}

// * Parametrised constructor with initializer list
ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10),
        energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap " << getName() << " is created" << std::endl;
}

// * Copy constructor with initializer list
ClapTrap::ClapTrap(const ClapTrap &other): name(other.name), hitPoints(other.hitPoints),
        energyPoints(other.energyPoints), attackDamage(other.attackDamage){
    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << getName() << " is destroyed" << std::endl; 
}

// * Setters & Getters
void ClapTrap::setName(const std::string value){
    this->name = value;
}

void ClapTrap::setHitPoints(const unsigned int value){
    this->hitPoints = value;
}

void ClapTrap::setEnergyPoints(const unsigned int value){
    this->energyPoints = value;
}

void ClapTrap::setAttackDamage(const unsigned int value){
    this->attackDamage = value;
}

std::string ClapTrap::getName() const{
    return this->name;
}

unsigned int ClapTrap::getHitPoints() const{
    return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const{
    return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
    return this->attackDamage;
}

// * Methods
void ClapTrap::attack(const std::string &target){
    if (getHitPoints() == 0){
        std::cout << "ClapTrap " << getName() << " can't attack because it's dead!" << std::endl;
        return;
    }
    if (getEnergyPoints() == 0){
        std::cout << "ClapTrap " << getName() << " has no energy left to attack!" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ClapTrap " << getName() << " attacks " << target
              << ", causing " << getAttackDamage() 
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (getHitPoints() == 0){
        std::cout << "ClapTrap " << getName() << " all ready dead" << std::endl;
        return;
    }
    if (amount >= getHitPoints()){
        this->hitPoints = 0;
    } else {
        this->hitPoints -= amount;
    }
    std::cout << "ClapTrap " << getName() << " takes " << amount 
              << " points of damage! Remaining HP: " 
              << getHitPoints() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (getHitPoints() == 0){
        std::cout << "ClapTrap " << getName() << " can't repair because it's dead!" << std::endl;
        return;
    }
    if (getEnergyPoints() == 0){
        std::cout << "ClapTrap " << getName() << " has no energy left to repair!" << std::endl;
        return;
    }
    
    this->energyPoints--;
    this->hitPoints += amount;
    
    std::cout << "ClapTrap " << getName() << " repairs itself, recovering "
              << amount << " hit points! Current HP: " << getHitPoints() << std::endl;
}
