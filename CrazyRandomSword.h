/* 
 * File:   CrazyRandomSword.h
 * Author: Cameron <cf15@my.fsu.edu>
 *
 * Created on February 02, 2019, 2:00 PM
 */

#include <string>
#include "Weapon.h"
#include <ctime>
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", myRandGenerator(7,101)) {}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

private:
	int myRandGenerator(int min, int max) {
		srand(time(0));
		return min + rand() % (( max + 1 ) - min);
	}

};

#endif

