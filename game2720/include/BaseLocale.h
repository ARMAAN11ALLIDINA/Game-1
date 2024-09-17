#ifndef BASELOCALE_H
#define BASELOCALE_H

#include <string>
#include <iostream>
#include "./BasicZombie.h"
#include "./BruteZombie.h"

/* include item class when built */

class BaseLocale
{
  public:
    /** Default constructor */
    BaseLocale(int i);
    /** Default destructor */
    virtual ~BaseLocale();
    void setEncounterRate(int i);
    std::string examine();
    int getEncounterRate();
    /* item search(); */
    void battle();
    void display(int &x, int &y);


  protected:
    int encounterRate;
    int x;
    int y;


  private:
};

#endif // BASELOCALE_H

