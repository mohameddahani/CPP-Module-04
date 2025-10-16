/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:37 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 16:03:28 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

// * Includes
#include <iostream>
#include "Animal.hpp"

// * Class With Orthodox Canonical Form
class Dog: public Animal{
    // ! public
    public:
        // * Default constructor
        Dog();

        // * Copy constructor
        Dog(const Dog &other);

        // * Copy assignment operator
        Dog &operator=(const Dog &other);

        // * Destructor
        ~Dog();

        // * Setters & Getters

        // * Methods
        void makeSound() const;
};

#endif