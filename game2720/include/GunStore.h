#ifndef GUNSTORE_H
#define GUNSTORE_H

#include <./BaseLocale.h>


class GunStore{
  public:
    /** Default constructor */
    GunStore(int i) {};
    /** Default destructor */
    virtual ~GunStore();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // GUNSTORE_H

