/*
 * File:   CrazyRandomSword.h
 * Author: Sam Ostlund (sco16c@my.fsu.edu)
 *
 * Created on January 24th, 2019
 */

 #include <string>
 #include <cstdlib>
 #include "Weapon.h"

 #ifndef CRAZYRANDOMSWORD_H
 #define CRAZYRANDOMSWORD_H

 /**
  * Defines the behavior of a crazy random sword (hitpoint = random integer between 7 and 100, ignores a random amount of armor from 2 to a third of the armor the weapon hits)
  */

  class CrazyRandomSword : public Weapon {
  public:

        CrazyRandomSword() : Weapon("Crazy random sword", rand() % 93 + 7) { //Calls Weapon(name, hitpoints) constructor with values crazy random sword and 25.0
        }

        virtual ~CrazyRandomSword() {};

        virtual double hit(double armor);

  };
 #endif /* CRAZYRANDOMSWORD_H */
