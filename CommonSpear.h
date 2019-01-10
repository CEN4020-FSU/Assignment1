/* 
 * File:   CommonSpear.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 27, 2017, 4:15 PM
 */

#include <string>
#include "Weapon.h"

#ifndef COMMONSPEAR_H
#define COMMONSPEAR_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CommonSpear : public Weapon {
public:

    CommonSpear() : Weapon("Common spear", 40.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~CommonSpear() {};

    virtual double hit(double armor);

};

#endif /* COMMONSPEAR_H */

