#ifndef CONVENIENCESTORE_H
#define CONVENIENCESTORE_H

#include <./BaseLocale.h>


class ConvenienceStore{
  public:
    /** Default constructor */
    ConvenienceStore(int i) {};
    /** Default destructor */
    virtual ~ConvenienceStore();
    void display(int &x, int &y, Character c, int &s);
    void battle(Character c, int &s);
  protected:
  private:
};

#endif // CONVENIENCESTORE_H
