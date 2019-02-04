/* 
 * File:   CrazyRandomSword.h
 * Author: Gregory <gyentz@gmail.com>
 *
 * Created on Feb 3, 2019, 8:45 PM
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef LIGHTSABER_H
#define LIGHTSABER_H

/**
 * Defines the behavior of a light saber (hitpoint = 100 / 1, ignores 20% of 
 * armor points)
 */
class LightSaber : public Weapon {
public:

	LightSaber() : Weapon("Lightsaber", ((rand()%2)*98)+1) { //Calls Weapon(name, hitpoints) constructor with values lightsaber and randomly either 1 or 100.
    }

    virtual ~LightSaber() {};

    virtual double hit(double armor);

};

#endif /* LIGHTSABER_H */

