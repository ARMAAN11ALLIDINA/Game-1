#include "../include/BruteZombie.h"

BruteZombie::~BruteZombie()
{
  //dtor
}

void BruteZombie::setDamage(){
  Damage=4;
}
void BruteZombie::setHealth(){
  Health = 5;
}

int BruteZombie::getZDamage(){
  return Damage;
}
int BruteZombie::getZHealth(){
  return Health;
}

