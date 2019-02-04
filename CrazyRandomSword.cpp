/* 
 * File:   CrazyRandomSword.cpp
 * Author: Gregory <gyentz@gmail.com>
 * 
 * Created on Feb 3, 2019, 8:45 PM
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    double damage = hitPoints - (rand() % ((armor/3) - 2) + 2);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
