/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:26 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:31:48 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

// * Includes
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// * Class With Orthodox Canonical Form
class Cat: public Animal {
    // ! private:
    private:
        Brain *mind;

    // ! public
    public:
        // * Default constructor
        Cat();

        // * Copy constructor
        Cat(const Cat &other);

        // * Copy assignment operator
        Cat &operator=(const Cat &other);

        // * Destructor
        ~Cat();

        // * Methods
        void makeSound() const;
};

#endif