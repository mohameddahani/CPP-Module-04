/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:52:10 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/20 10:03:31 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

// * Includes
#include <iostream>
#include "AMateria.hpp"

// * Class With Orthodox Canonical Form
class IMateriaSource {
    // ! public
    public:
        // * Default constructor
        IMateriaSource();

        // * Copy constructor
        IMateriaSource(const IMateriaSource &other);

        // * Copy assignment operator
        IMateriaSource &operator=(const IMateriaSource &other);

        // * Destructor
        virtual ~IMateriaSource();

        // * Setters & Getters

        // * Methods
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif