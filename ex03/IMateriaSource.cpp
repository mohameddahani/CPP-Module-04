/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:59:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/18 18:50:33 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
IMateriaSource::IMateriaSource(){
    std::cout << "Default constructor of IMateriaSource is called" << std::endl;
}

// * Copy constructor with initializer list
IMateriaSource::IMateriaSource(const IMateriaSource &other){
    std::cout << "Copy constructor of IMateriaSource is called" << std::endl;
}

// * Copy assignment operator
IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other){
    std::cout << "Copy assignment operator of IMateriaSource is called" << std::endl;
    
    return *this;
}

// * Destructor
IMateriaSource::~IMateriaSource(){
    std::cout << "IMateriaSource" << " is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
