/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/18 17:28:03 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

// * Includes
#include <iostream>
#include "AMateria.hpp"

// * Class With Orthodox Canonical Form
class Ice: public AMateria {
    // // ! protected
    // protected:
    //     std::string type;

    // ! public
    public:
        // * Default constructor
        Ice();

        // // * Parametrised constructor
        // Ice(std::string const & type);

        // * Copy constructor
        Ice(const Ice &other);

        // * Copy assignment operator
        Ice &operator=(const Ice &other);

        // * Destructor
        ~Ice();

        // * Setters & Getters
        // std::string const &getType() const;

        // * Methods
        AMateria *clone() const;
};

#endif