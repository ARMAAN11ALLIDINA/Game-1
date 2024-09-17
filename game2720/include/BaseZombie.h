#ifndef BASEZOMBIE_H
#define BASEZOMBIE_H

#include <iostream>
#include <string>
#include "./Character.h"

class BaseZombie{
  public:
    /** Default constructor */
    BaseZombie();
    /** Default destructor */
    virtual ~BaseZombie();
    //sets predetermined values for damage
    void setDamage();
    /** Gets Health for the zombie */
    int getHealth();
    /** Gets the Damage the zombie deals */
    int getDamage();
  protected:
    int Health;
    int Damage;
  private:
};

#endif // BASEZOMBIE_H

