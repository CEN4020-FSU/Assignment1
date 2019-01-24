/*
 * File:   RareSword.h
 * Author: Sam Ostlund (sco16c@my.fsu.edu)
 *
 * Created on January 24th, 2019
 */

 #include <string>
 #include "Weapon.h"

 #ifndef RARESWORD_H
 #define RARESWORD_H

 /**
  * Defines the behavior of a rare sword (hitpoint = 80, ignores 50% of
  * armor points)
  */

  class RareSword : public Weapon {
  public:

      RareSword() : Weapon("Rare sword", 80.0) { //Calls Weapon(name, hitpoints) constructor with values rare sword and 80.0
      }

      virtual ~RareSword() {};

      virtual double hit(double armor);

  };

  #endif /* RARESWORD_H */
