/* 
 * File:   CommonSpear.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 27, 2017, 4:15 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class SimpleHammer : public Weapon {
public:

	SimpleHammer() : Weapon("Simpple Hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
	
	}

	virtual ~SimpleHammer() {};

	virtual double hit(double armor);

};

#endif /* COMMONSPEAR_H */

