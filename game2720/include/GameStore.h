#ifndef GAMESTORE_H
#define GAMESTORE_H

#include <./BaseLocale.h>
#include "./Character.h"
#include "./BasicZombie.h"


class GameStore{
  public:
    /** Default constructor */
    GameStore(int i) {};
    /** Default destructor */
    virtual ~GameStore();
    void display(int &x, int &y, Character &c, int &s);
    void battle(Character &c, int &s);
  protected:
  private:
};

#endif // GAMESTORE_H

