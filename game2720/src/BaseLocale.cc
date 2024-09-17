#include "../include/BaseLocale.h"

BaseLocale::BaseLocale(int e)
{
  setEncounterRate(e);
}

BaseLocale::~BaseLocale()
{
  //dtor
}

void BaseLocale::setEncounterRate(int i){
  encounterRate = i;
}

int BaseLocale::getEncounterRate(){
  int i;
  i = encounterRate;
  return i;
}

