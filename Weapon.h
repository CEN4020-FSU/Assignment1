/* 
 * File:   Weapon.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:21 PM
 */

#include <string>

#ifndef WEAPON_H
#define WEAPON_H

/**
 * Defines the specification of a weapon. A weapon must define its hitpoints
 * as well as its behavior in the presence of armor. If there is no armor, the 
 * weapon inflicts damage equals to its hitpoints. 
 */
class Weapon {
protected:
    /**
     * Name of the weapon
     */
    std::string name;
    /*
     * Weapon's hitpoints
     */
    double hitPoints;
public:
    /**
     * 
     * @param name Weapon's name
     * @param hitPoints Weapon's hitpoints
     */
    Weapon(std::string name, double hitPoints)
            : name(name),
              hitPoints(hitPoints) {} //This is equivalent to this.name = name and this.hitpoints = hitpoitns;

    /**
     * Detructor
     */
    virtual ~Weapon() {};

    /**
     * Returns the name of the weapon
     * @return The name of the weapon
     */
    std::string getName();

    /**
     * Returns the damage of the weapon in presence of armor 
     * @param armor Amount of armor of the character the weapoin is hitting to
     * @return The damage inflicted by the weapon
     */
    virtual double hit(double armor) = 0;

    /**
     * Returns the damage of the weapon in abscense of armor
     * @return Damage equals to the hitpoints of the weapon
     */
    double hit();
};


#endif /* WEAPON_H */

