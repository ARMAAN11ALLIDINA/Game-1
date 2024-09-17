#ifndef SECURITY_H
#define SECURITY_H

#include <./BaseLocale.h>


class Security{
  public:
    /** Default constructor */
    Security(int i) {};
    /** Default destructor */
    virtual ~Security();
    void display(int &x, int &y, int &card);
    void battle();
  protected:
  private:
};

#endif // SECURITY_H

