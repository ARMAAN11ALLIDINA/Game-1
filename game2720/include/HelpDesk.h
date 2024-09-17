#ifndef HELPDESK_H
#define HELPDESK_H

#include <./BaseLocale.h>


class HelpDesk{
  public:
    /** Default constructor */
    HelpDesk(int i) {};
    /** Default destructor */
    virtual ~HelpDesk();
    void display(int &x, int &y, int &k, int &s);
  protected:
  private:
};

#endif // HELPDESK_H

