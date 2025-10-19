/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 15:44:25 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// * Includes
#include <iostream>
#include "AMateria.hpp"

// * Class With Orthodox Canonical Form
class ICharacter {
    // ! public
    public:
        // * Default constructor
        ICharacter();

        // * Copy constructor
        ICharacter(const ICharacter &other);

        // * Copy assignment operator
        ICharacter &operator=(const ICharacter &other);

        // * Destructor
        virtual ~ICharacter(){}

        // * Setters & Getters
        virtual std::string const & getName() const = 0;

        // * Methods
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;

};

#endif