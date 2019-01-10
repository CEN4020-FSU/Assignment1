/* 
 * File:   CommonSword.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */

#include "CommonSword.h"


double CommonSword::hit(double armor){
    double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}