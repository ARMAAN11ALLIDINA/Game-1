#ifndef PHARMACY_H
#define PHARMACY_H

#include <./BaseLocale.h>


class Pharmacy{
  public:
    /** Default constructor */
    Pharmacy(int i) {};
    /** Default destructor */
    virtual ~Pharmacy();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // PHARMACY_H

