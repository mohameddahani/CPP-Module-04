/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 09:41:09 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// * Includes
#include <iostream>
#include "ICharacter.hpp"

// * Class With Orthodox Canonical Form
class AMateria {
    // ! protected
    protected:
        std::string type;

    // ! public
    public:
        // * Default constructor
        AMateria();

        // * Parametrised constructor
        AMateria(std::string const & type);

        // * Copy constructor
        AMateria(const AMateria &other);

        // * Copy assignment operator
        AMateria &operator=(const AMateria &other);

        // * Destructor
        virtual ~AMateria();

        // * Setters & Getters
        std::string const &getType() const;

        // * Methods
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif