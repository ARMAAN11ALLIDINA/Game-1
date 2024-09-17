#ifndef BASICZOMBIE_H
#define BASICZOMBIE_H

#include <./BaseZombie.h>


class BasicZombie : public BaseZombie{
  public:
    /** Default constructor */
    BasicZombie() {};
    /** Default destructor */
    virtual ~BasicZombie();
    void setDamage();
    void setHealth();
    int getZHealth(int i);
    int getZDamage(int i);
  protected:
    int Health = 3;
    int Damage = 2;
  private:
};

#endif // BASICZOMBIE_H

