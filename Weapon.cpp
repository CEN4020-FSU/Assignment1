/* 
 * File:   Weapon.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include "Weapon.h"

std::string Weapon::getName() {
    return name;
}

double Weapon::hit() {
    return hitPoints;
}