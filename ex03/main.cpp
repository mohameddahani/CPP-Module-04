/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:50:33 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/20 13:22:53 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;   
    }


    {
        // * Create a Character
        ICharacter *bruno = new Character("Bruno");
       
        // * Learn and create Some Materia and equip it
        AMateria *tmp;
        IMateriaSource *src = new MateriaSource();

        // * learn
        src->learnMateria(new Ice());
        // * create
        tmp = src->createMateria("ice");
        // * equip it
        bruno->equip(tmp);
        
        src->learnMateria(new Cure());
        tmp = src->createMateria("cure");
        bruno->equip(tmp);

        // * careate another character to use on him the materia
        ICharacter *enemy = new Character("enemy");
        
        // * attack
        bruno->use(0, *enemy);
        bruno->use(1, *enemy);

        delete bruno;
        delete src;
        delete enemy;
    }

    
    {
        // * Create a Character
        Character bruno("Bruno");
       
        // * Learn and create Some Materia and equip it
        AMateria *tmp;
        MateriaSource src;

        // * learn
        src.learnMateria(new Ice());
        // * create
        tmp = src.createMateria("ice");
        // * equip it
        bruno.equip(tmp);
        
        src.learnMateria(new Cure());
        tmp = src.createMateria("cure");
        bruno.equip(tmp);

        // * careate another character to use on him the materia
        Character enemy("enemy");
        
        // * attack
        bruno.use(0, enemy);
        bruno.use(1, enemy);
    }

    return 0;
}