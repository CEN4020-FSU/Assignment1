/* 
 * File:   RPG.cpp
 * Author: Cameron <cf15@my.fsu.edu>
 *  
 */

#include "RPG.h"
#include <cmath>

double RPG::hit(double armor) {

	double damage = hitPoints - (armor*0.25 - static_cast<int>(floor(armor/4)));
    if (damage < 0) {
        return 0;
    }
    return damage;
}
