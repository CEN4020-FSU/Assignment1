/* 
 * File:   CrazyRandomSword.h
 * Author: Gregory <gyentz@gmail.com>
 *
 * Created on Feb 3, 2019, 8:45 PM
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", ((rand()%93)+7)) { //Calls Weapon(name, hitpoints) constructor with values Crazy random sword and random integer number between 7 and 100.
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

