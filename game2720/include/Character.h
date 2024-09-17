#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>

class Character{
  public:
   Character(std::string name = "",int health = 10, int strength = 0, int agility = 0);
   virtual ~Character() {}
   void getStats();
   int getStrength();
   int getAgility();
   int getHealth();
   int firstGetDamage(int);
   void openMenu();
   int getHealing();
   void setHealth(int i);
   void setDamage(int i);
   int getDamage();
   void setHealing(int i);
   //int heal(int, int);
  protected:
   std::string name;
   int strength;
   int agility;
   int health;
   int damage;
   int healing = 1;
  private:
};

#endif // CHARACTER_H

