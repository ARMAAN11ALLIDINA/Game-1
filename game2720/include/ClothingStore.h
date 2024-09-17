#ifndef CLOTHINGSTORE_H
#define CLOTHINGSTORE_H

#include <./BaseLocale.h>


class ClothingStore
{
  public:
    /** Default constructor */
    ClothingStore(int i) {};
    /** Default destructor */
    virtual ~ClothingStore();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);


  protected:

  private:
};

#endif // CLOTHINGSTORE_H

