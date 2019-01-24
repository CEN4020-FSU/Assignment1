/*
 * File:   RareSword.cpp
 * Author: Sam Ostlund (sco16c@my.fsu.edu)
 *
 * Created on January 24th, 2019
 */

 #include "RareSword.h"

 double RareSword::hit(double armor) {
     double damage = hitPoints - (armor * 0.5); //ignores 50% of armor
     if (damage < 0) {
         return 0;
     }
     return damage;
 }
