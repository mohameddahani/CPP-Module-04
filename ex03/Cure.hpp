/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 11:07:16 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

// * Includes
#include <iostream>
#include "AMateria.hpp"

// * Class With Orthodox Canonical Form
class Cure: public AMateria {
    // ! public
    public:
        // * Default constructor
        Cure();

        // * Copy constructor
        Cure(const Cure &other);

        // * Copy assignment operator
        Cure &operator=(const Cure &other);

        // * Destructor
        ~Cure();

        // * Setters & Getters

        // * Methods
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif