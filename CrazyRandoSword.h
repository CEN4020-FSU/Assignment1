/* 
 * File:   CommonSword.h
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H


/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CrazyRandoSword : public Weapon {
public:
    CrazyRandoSword() : Weapon("Crazy Random sword",50.0) //Calls Weapon(name, hitpoints) constructor with values Common Sword and 50.0
    {
    }

    virtual ~CrazyRandoSword() {};

    virtual double hit(double armor);

};

#endif /* COMMONSWORD_H */

