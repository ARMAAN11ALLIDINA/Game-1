#include "../include/GunStore.h"
#include "../include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>

GunStore::~GunStore()
{
  //dtor
}

void GunStore::display(int &x, int &y, Character c, int &s){
  int b = 0;
  if(b == 0){
    battle(c, s);
    b++;
    if(s == -1)
      return;
  }
  int moved = 0;
  do{
    std::cout << "The place is pretty barricaded, seems this where a lot of people made there stand, and whoever they were, they were damn good at keeping out zombies as the amount of bodies by the front was astounding." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere;
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "Looking closer it looks like they were a bit too good at it, as pile also has more then its fair share of just normal looking corpses. They probably thought they were infected, but who knows." << std::endl;
      break;
    }
    if(userChoice == "loot"){
      std::cout << "Lucky for you there still seems to be a shotgun on the wall. Groovy. Now go and kick some ass." << std::endl;
      int gun = 2;
      c.setDamage(gun);
      break;
    }
    if(userChoice == "move"){
      std::cout << "Where would you like to move to? The 'sculpture'?" << std::endl;//where would you like to move to?
      std::cin >> moveHere;
      std::transform(moveHere.begin(), moveHere.end(), moveHere.begin(), ::tolower);
      if(moveHere == "sculpture"){
        x = 7;
        y = 7;
        moved = 1;
        break;
      }
      else
        std::cout << "That is not a viable location." << std::endl;
    }
    else
      std::cout << "That is not a viable command." << std::endl;
  }while(moved == 0);
}

void GunStore::battle(Character c, int &s){
  std::cout << "A bulky zombie crawls out from under a pile of corpses and looks at you, clearly sensing fresh meat." << std::endl;
  //build the required classes
  BruteZombie z;


  //get required ints and fix zombie later on, just stuck the values in for now
  int i = 0;
  int playerHealth = c.getHealth();
  int zombieHealth = z.getZHealth();
  int playerDamage = c.getDamage();
  int zombieDamage = z.getZDamage();
  int battleEnd = 0;

  //main loop of battle
  do{
    int turn = 0;
    if(playerHealth >= 1){
      if(zombieHealth >= 1){
        do{
          std::string choice = "";
          std::cout << "What would you like to do?" << std::endl << "'attack'" << std::endl << "'heal'" << std::endl;
          std::cin >> choice;
          if(choice == "attack"){
            std::cout << "You attack dealing " << playerDamage << " damage to the zombie!" << std::endl;
            zombieHealth = zombieHealth - playerDamage;
            std::cout << "The zombie attacks you for " << zombieDamage << " damage!" << std::endl;
            playerHealth = playerHealth - zombieDamage;
            turn = 1;
          }
          else if(choice == "heal"){
            std::cout << "That feature isn't implemented yet." << std::endl;
            std::cout << "The zombie attacks you for " << zombieDamage << " damage!" << std::endl;
            playerHealth = playerHealth - zombieDamage;
            turn = 1;
          }
          else
            std::cout << "That isn't a command." << std::endl;
        }while(turn == 0);
      }
      if(zombieHealth <= 0){
        std::cout << "The bloodied corpse of the zombie falls to the ground dead, forever now. You've survived this battle." << std::endl;
        battleEnd = 1;
        c.setHealth(playerHealth);
      }
    }
    if(playerHealth <= 0){
      std::cout << "You fall to the floor as you're too hurt to continue now. The zombie horde encloses around you, and soon you join the ranks of the undead." << std::endl;
      battleEnd = 1;
      s = -1;
    }
  }while(battleEnd == 0);
}

