/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:32:52 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

// * Includes
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


// * Class With Orthodox Canonical Form
class Ice: public AMateria {
    // ! public
    public:
        // * Default constructor
        Ice();

        // * Copy constructor
        Ice(const Ice &other);

        // * Copy assignment operator
        Ice &operator=(const Ice &other);

        // * Destructor
        ~Ice();

        // * Methods
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif