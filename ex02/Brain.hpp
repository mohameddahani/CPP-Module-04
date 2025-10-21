/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:26:45 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/21 21:31:33 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

// * Includes
#include <iostream>

class Brain {
    // ! public
    public:
        std::string ideas[100];

        // * Default constructor
        Brain();

        // * Copy constructor
        Brain(const Brain &other);

        // * Copy assignment operator
        Brain &operator=(const Brain &other);

        // * Destructor
        virtual ~Brain();
};

#endif