/* 
 * File:   CrazyRandomSword.cpp
 * Author: Gregory <gyentz@gmail.com>
 * 
 * Created on Feb 3, 2019, 8:45 PM
 */

#include "LightSaber.h"

double LightSaber::hit(double armor) {
    double damage = hitPoints - ((rand()%2)*50);	//either they know or do not know that ways of the force
    if (damage < 0) {
        return 0;
    }
    return damage;
}
