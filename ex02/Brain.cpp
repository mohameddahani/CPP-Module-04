/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:41:30 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/17 10:31:26 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Brain::Brain(){
    std::cout << "Default constructor of Brain is called" << std::endl;
}

// * Copy constructor with initializer list
Brain::Brain(const Brain &other){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
    
    std::cout << "Copy constructor of Brain is called" << std::endl;
}

// * Copy assignment operator
Brain &Brain::operator=(const Brain &other){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }

    std::cout << "Copy assignment operator of Brain is called" << std::endl;
    
    return *this;
}

// * Destructor
Brain::~Brain(){
    std::cout << "Brain" << " is destroyed" << std::endl;
}

// * Setters & Getters


// * Methods
