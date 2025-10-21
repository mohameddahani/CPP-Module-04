/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:37 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:31:01 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

// * Includes
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// * Class With Orthodox Canonical Form
class Dog: public Animal {
    // ! private:
    private:
        Brain *mind;
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

        // * Methods
        void makeSound() const;
};

#endif