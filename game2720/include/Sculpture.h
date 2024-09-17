#ifndef SCULPTURE_H
#define SCULPTURE_H

#include <./BaseLocale.h>


class Sculpture{
  public:
    /** Default constructor */
    Sculpture(int i) {};
    /** Default destructor */
    virtual ~Sculpture();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // SCULPTURE_H

