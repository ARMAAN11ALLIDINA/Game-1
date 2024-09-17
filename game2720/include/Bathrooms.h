#ifndef BATHROOMS_H
#define BATHROOMS_H

#include <./BaseLocale.h>


class Bathrooms{
  public:
    /** Default constructor */
    Bathrooms(int i) {};
    /** Default destructor */
    virtual ~Bathrooms();
    void display(int &x, int &y, int &s);
    void battle();
  protected:
  private:
};

#endif
