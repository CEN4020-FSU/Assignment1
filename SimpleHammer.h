/*
 * File:   SimpleHammer.h
 * Author: Sam Ostlund (sco16c@my.fsu.edu)
 *
 * Created on January 24th, 2019
 */

 #include <string>
 #include "Weapon.h"

 #ifndef SIMPLEHAMMER_H
 #define SIMPLEHAMMER_H

 /**
  * Defines the behavior of a simple hammer (hitpoint = 25, ignores all armor if armor is below 30)
  */

  class SimpleHammer : public Weapon {
  public:

        SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values simple hammer and 25.0
        }

        virtual ~SimpleHammer() {};

        virtual double hit(double armor);

  };
 #endif /* SIMPLEHAMMER_H */
