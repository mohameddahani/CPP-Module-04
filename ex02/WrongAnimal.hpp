/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:45 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/16 17:16:22 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
class WrongAnimal {
    // ! protected
    protected:
        std::string type;

    // ! public
    public:
        // * Default constructor
        WrongAnimal();

        // * Copy constructor
        WrongAnimal(const WrongAnimal &other);

        // * Copy assignment operator
        WrongAnimal &operator=(const WrongAnimal &other);

        // * Destructor
        ~WrongAnimal();

        // * Setters & Getters
        std::string getType() const;

        // * Methods
        void makeSound() const;
};

#endif
