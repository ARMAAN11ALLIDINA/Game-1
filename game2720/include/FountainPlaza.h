#ifndef FOUNTAINPLAZA_H
#define FOUNTAINPLAZA_H

#include <BaseLocale.h>


class FountainPlaza{
  public:
	/** Default constructor */
	FountainPlaza(int i) {};
	/** Default destructor */
	virtual ~FountainPlaza();
	void display(int &x, int &y, Character c, int &s);
	void battle(Character c, int &s);
  protected:
  private:
};

#endif // FOUNTAINPLAZA_H


