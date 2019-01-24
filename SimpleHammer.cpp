/*
 * File:   SimpleHammer.cpp
 * Author: Sam Ostlund (sco16c@my.fsu.edu)
 *
 * Created on January 24th, 2019
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
 {
    if (armor < 30) //checks if the armor is less than 30, if so then it just does 25 damage.
      return 25;
    double damage = hitPoints - armor; //actual damage given they have 30 or more armor.
    if (damage < 0)
        return 0;
    return damage;
}
