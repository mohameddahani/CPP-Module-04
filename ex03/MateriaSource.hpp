/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/19 16:24:35 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

// * Includes
#include <iostream>
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// * Class With Orthodox Canonical Form
class MateriaSource: public IMateriaSource {
    // ! public
    public:
        // * Default constructor
        MateriaSource();

        // * Copy constructor
        MateriaSource(const MateriaSource &other);

        // * Copy assignment operator
        MateriaSource &operator=(const MateriaSource &other);

        // * Destructor
        ~MateriaSource(){}

        // * Setters & Getters

        // * Methods
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif