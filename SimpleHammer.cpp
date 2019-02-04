/* 
 * File:   SimpleHammer.cpp
 * Author: Gregory <gyentz@gmail.com>
 * 
 * Created on Feb 3, 2019, 8:45 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    if(armor < 30.0){
    	damage = hitPoints;
    }
    else{
    	damage = hitPoints - armor;
    }
    if (damage < 0) {
        return 0;
    }
    return damage;
}
