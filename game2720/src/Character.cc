#include "../include/Character.h"
#include<iostream>
#include<string>

Character::Character(std::string n, int h, int s, int a) {
  name = n;
  strength = s;
  agility = a;
  health = h;
  damage = firstGetDamage(s);
}

int Character::getStrength(){
  int strength;
  return strength;
}
int Character::getAgility(){
  int agility;
  return agility;
}
int Character::firstGetDamage(int strength){
  int damage;
  if(strength <= 2)
    damage = 1;
  if(strength == 3||strength == 4)
    damage = 2;
  if(strength>=5)
    damage = 3;
  return damage;
}
int Character::getHealth(){
  return health;
}
void Character::openMenu(){
  int c;
  std::cout<<"if you wish to coninue press 1 if not exit window"<<std::endl;
  std::cin>>c;
  switch(c){
  case 1:
    break;
  }
}

int Character::getHealing(){
  return healing;
}

void Character::setHealth(int h){
  health = health - h;
}

void Character::setDamage(int i){
  damage = damage + i;
}

int Character::getDamage(){
  return damage;
}

void Character::setHealing(int i){
  healing = healing + i;
}


