/* 
 * File:   CommonSword.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */

#include "CrazyRandoSword.h"


double CrazyRandoSword::hit(double armor){
    double damage;
    if ( armor >=2 && armor < (hitPoints/3))
        damage = hitPoints;
    else 
        damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}