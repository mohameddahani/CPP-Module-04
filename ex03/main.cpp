/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:50:33 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/20 16:29:13 by mdahani          ###   ########.fr       */
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
    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     ICharacter* me = new Character("me");
    //     AMateria* tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     ICharacter* bob = new Character("bob");
    //     me->use(0, *bob);
    //     me->use(1, *bob);
        
    //     delete bob;
    //     delete me;
    //     delete src;
    // }


    {
        // * Create a Character
        ICharacter *bruno = new Character("Bruno");
       
        // * Learn and create Some Materia and equip it
        AMateria *tmp;
        IMateriaSource *src = new MateriaSource();

        // * learn
        Ice *newIce = new Ice();
        src->learnMateria(newIce);
        // * create
        tmp = src->createMateria("ice");
        // * equip it
        bruno->equip(tmp);

        Cure *newCure = new Cure();
        src->learnMateria(newCure);
        tmp = src->createMateria("cure");
        bruno->equip(tmp);

        // * careate another character to use on him the materia
        ICharacter *enemy = new Character("enemy");
        
        // * attack
        bruno->use(0, *enemy);
        bruno->use(1, *enemy);

        // * delete all allocation memory
        delete enemy;
        delete src;
        delete bruno;
        delete newCure;
        delete newIce;
    }

    
    // {
    //     // * Create a Character
    //     Character bruno("Bruno");
       
    //     // * Learn and create Some Materia and equip it
    //     AMateria *tmp;
    //     MateriaSource src;

    //     // * learn
    //     AMateria *newIce = new Ice();
    //     src.learnMateria(newIce);
    //     // * create
    //     tmp = src.createMateria("ice");
    //     // * equip it
    //     bruno.equip(tmp);
        
    //     AMateria *newCure = new Cure();
    //     src.learnMateria(newCure);
    //     tmp = src.createMateria("cure");
    //     bruno.equip(tmp);

    //     // * careate another character to use on him the materia
    //     Character enemy("enemy");
        
    //     // * attack
    //     bruno.use(0, enemy);
    //     bruno.use(1, enemy);

    //     // * delete all allocation memory
    //     delete newCure;
    //     delete newIce;
    // }

    return 0;
}