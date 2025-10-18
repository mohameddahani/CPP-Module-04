/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:45 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/18 11:05:54 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// ? Abstract Class Rules:

// ! Used to define a common interface for derived classes.
// * Must have at least one pure virtual function: virtual void func() = 0;
// * If you forget 'virtual', it's not abstract.
// * Without (= 0), it's a normal function, so class is not abstract.
// * You can't create an object from an abstract class.
// * You can create a pointer to it (Shape* s = new Circle();).
// * Child must override all pure virtual functions, or it stays abstract.

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
        virtual void makeSound() const = 0;
};

#endif
