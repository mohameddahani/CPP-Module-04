/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:37 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/15 19:08:36 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
class Dog {
    // ! public
    public:
        // * Default constructor
        Dog();

        // * Parametrised constructor
        Dog(const std::string name);

        // * Copy constructor
        Dog(const Dog &other);

        // * Copy assignment operator
        Dog &operator=(const Dog &other);

        // * Destructor
        ~Dog();

        // * Setters & Getters

        // * Methods
};

#endif