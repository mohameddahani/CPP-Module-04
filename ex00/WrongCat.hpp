/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:26 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:30:23 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

// * Includes
#include <iostream>
#include "WrongAnimal.hpp"

// * Class With Orthodox Canonical Form
class WrongCat: public WrongAnimal {
    // ! public
    public:
        // * Default constructor
        WrongCat();

        // * Copy constructor
        WrongCat(const WrongCat &other);

        // * Copy assignment operator
        WrongCat &operator=(const WrongCat &other);

        // * Destructor
        ~WrongCat();

        // * Methods
        void makeSound() const;
};

#endif