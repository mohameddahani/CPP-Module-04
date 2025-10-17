/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:45 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 16:02:22 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
class Animal {
    // ! protected
    protected:
        std::string type;

    // ! public
    public:
        // * Default constructor
        Animal();

        // * Copy constructor
        Animal(const Animal &other);

        // * Copy assignment operator
        Animal &operator=(const Animal &other);

        // * Destructor
        virtual ~Animal();

        // * Setters & Getters
        std::string getType() const;

        // * Methods
        virtual void makeSound() const;
};

#endif
