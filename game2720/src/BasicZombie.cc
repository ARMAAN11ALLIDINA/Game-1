#include <../include/BasicZombie.h>


BasicZombie::~BasicZombie()
{
  //dtor
}


void BasicZombie::setDamage(){
  Damage = 2;
}

void BasicZombie::setHealth(){
  Health = 3;
}

int BasicZombie::getZHealth(int i){
  return Health;
}

int BasicZombie::getZDamage(int i){
  return Damage;
}
