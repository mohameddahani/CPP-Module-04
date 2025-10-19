/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/18 18:45:26 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// * Includes
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

// * Class With Orthodox Canonical Form
class Character: public ICharacter {
    // ! private
    private:
        std::string name;
        AMateria *inventory[4] = {0};
    // ! public
    public:
        // * Default constructor
        Character();

        // * Parametrised constructor
        Character(std::string name);

        // * Copy constructor
        Character(const Character &other);

        // * Copy assignment operator
        Character &operator=(const Character &other);

        // * Destructor
        virtual ~Character(){}

        // * Setters & Getters
        std::string const & getName() const;

        // * Methods
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif