/* 
 * File:   CrazyRandomSword.cpp
 * Author: Cameron <cf15@my.fsu.edu>
 *  
 */

#include "CrazyRandomSword.h"
#include <cmath>

double CrazyRandomSword::hit(double armor) {

	double damage = hitPoints - (armor - myRandGenerator(2, static_cast<int>(floor(armor/3))+1));
    if (damage < 0) {
        return 0;
    }
    return damage;
}
