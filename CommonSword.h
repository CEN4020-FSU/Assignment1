/* 
 * File:   CommonSword.h
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"

#ifndef COMMONSWORD_H
#define COMMONSWORD_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CommonSword : public Weapon {
public:

    CommonSword() : Weapon("Common sword",50.0) //Calls Weapon(name, hitpoints) constructor with values Common Sword and 50.0
    {
    }

    virtual ~CommonSword() {};

    virtual double hit(double armor);

};

#endif /* COMMONSWORD_H */

