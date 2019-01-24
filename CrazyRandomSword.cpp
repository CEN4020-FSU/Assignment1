/*
 * File:   CrazyRandomSword.cpp
 * Author: Sam Ostlund (sco16c@my.fsu.edu)
 *
 * Created on January 24th, 2019
 */

 #include "CrazyRandomSword.h"
 #include <cmath>

 double CrazyRandomSword::hit(double armor)
 {
     srand(time(NULL)); //seeds the RNG
     double third = floor(armor / 3); //finds a third of the armor and floords it
     double range = third - 2; //finds the range between the third of armor and 2
     int irange = static_cast<int>(range);
     double reducedArmor = rand() % irange + 2; //finds a random number generator between 2 and the third of armor
     armor = armor - reducedArmor; //reduces the armor since it is being ignored
     double damage = hitPoints - armor; //
     if (damage < 0) {
         return 0;
     }
     return damage;
 }
