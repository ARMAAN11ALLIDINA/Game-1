#ifndef BRUTEZOMBIE_H
#define BRUTEZOMBIE_H
#include <./BaseZombie.h>

class BruteZombie : public BaseZombie{
  public:
    /** Default constructor */
    BruteZombie() {};
    /** Default destructor */
    virtual ~BruteZombie();
    void setDamage();
    void setHealth();
    int getZDamage();
    int getZHealth();
  protected:
    int Health = 5;
    int Damage = 4;
  private:
};
#endif // BRUTEZOMBIE_H

