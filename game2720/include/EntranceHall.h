#ifndef ENTRANCEHALL_H
#define ENTRANCEHALL_H

#include <./BaseLocale.h>


class EntranceHall{
  public:
    /** Default constructor */
    EntranceHall(int i) {};
    /** Default destructor */
    virtual ~EntranceHall();
    void display(int &x, int &y);
  protected:
  private:
};
#endif // ENTRANCEHALL_H
