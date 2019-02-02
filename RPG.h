/* 
 * File:   RPG.h
 * Author: Cameron <cf15@my.fsu.edu>
 *
 * Created on February 02, 2019, 2:00 PM
 */

#include <string>
#include "Weapon.h"

#ifndef RPG_H
#define RPG_H

class RPG : public Weapon {
public:

    RPG() : Weapon("RPG", 95.0) {}

    virtual ~RPG() {};

    virtual double hit(double armor);

};

#endif

