#ifndef CAFETERIA_H
#define CAFETERIA_H

#include <./BaseLocale.h>



class Cafeteria{
  public:
    /** Default constructor */
    Cafeteria(int i) {};
    /** Default destructor */
    virtual ~Cafeteria();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // CAFETERIA_H

