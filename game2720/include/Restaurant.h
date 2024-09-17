#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <./BaseLocale.h>


class Restaurant{
  public:
    /** Default constructor */
    Restaurant(int i) {};
    /** Default destructor */
    virtual ~Restaurant();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // RESTAURANT_H


