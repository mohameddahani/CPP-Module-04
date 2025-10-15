/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:21 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/15 19:08:31 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
class Cat {
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