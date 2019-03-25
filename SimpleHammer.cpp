/* 
 * File:   CommonSword.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */
#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){

    double damage = hitPoints - armor ;
    if ( armor < 30 )
        damage = hitPoints;
    if(damage < 0){
        return 0;
    }
    return damage;
}