/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

#include "MyOwnWeapon.h"

double MyOwnWeapon::hit(double armor) {
    double damage = hitPoints - (armor);
    if ( damage <= 0)
        damage = .1;

    if (damage < 0) {
        return 0;
    }
    return damage;
}
