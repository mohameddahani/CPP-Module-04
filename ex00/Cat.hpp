/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:26 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 13:53:27 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

// * Includes
#include <iostream>
#include "Animal.hpp"

// * Class With Orthodox Canonical Form
class Cat: public Animal {
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
        void makeSound() const;
};

#endif