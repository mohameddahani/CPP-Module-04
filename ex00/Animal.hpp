/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:45 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/14 14:05:25 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
// * Animal Class
class Animal{
    // ! protected
    protected:
        std::string type;

    // ! public
    public:
        // * Default constructor
        Animal();

        // * Parametrised constructor
        Animal(const std::string name);

        // * Copy constructor
        Animal(const Animal &other);

        // * Copy assignment operator
        Animal &operator=(const Animal &other);

        // * Destructor
        ~Animal();

        // * Setters & Getters

        // * Methods
        void makeSound();
};

// * Dog Class
class Dog{
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

// * Cat Class
class Cat{
    // ! public
    public:
        // * Default constructor
        Cat();

        // * Parametrised constructor
        Cat(const std::string name);

        // * Copy constructor
        Cat(const Cat &other);

        // * Copy assignment operator
        Cat &operator=(const Cat &other);

        // * Destructor
        ~Cat();

        // * Setters & Getters

        // * Methods
};

#endif
