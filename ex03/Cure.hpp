/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/18 17:35:50 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

// * Includes
#include <iostream>
#include "AMateria.hpp"

// * Class With Orthodox Canonical Form
class Cure: public AMateria {
    // // ! protected
    // protected:
    //     std::string type;

    // ! public
    public:
        // * Default constructor
        Cure();

        // // * Parametrised constructor
        // Cure(std::string const & type);

        // * Copy constructor
        Cure(const Cure &other);

        // * Copy assignment operator
        Cure &operator=(const Cure &other);

        // * Destructor
        ~Cure();

        // * Setters & Getters
        // std::string const &getType() const;

        // * Methods
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif