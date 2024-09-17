#ifndef KITCHENSTORE_H
#define KITCHENSTORE_H

#include <./BaseLocale.h>


class KitchenStore{
  public:
    /** Default constructor */
    KitchenStore(int i) {};
    /** Default destructor */
    virtual ~KitchenStore();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // KITCHENSTORE_H


