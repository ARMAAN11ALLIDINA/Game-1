#ifndef GROCERYSTORE_H
#define GROCERYSTORE_H

#include <./BaseLocale.h>


class GroceryStore{
  public:
    /** Default constructor */
    GroceryStore(int i) {};
    /** Default destructor */
    virtual ~GroceryStore();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // GROCERYSTORE_H
