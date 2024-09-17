#include "./include/ConvienceStore.h"
#include "./include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>


ConvenienceStore::~ConvenienceStore()
{
  //dtor
}

void ConvenienceStore::display(int &x, int &y, Character c, int &s){
  int b = 0;
  if(b == 0){
    battle(c, s);
    b++;
    if(s == -1)
      return;
  }
  int moved = 0;
  do{
    std::cout << "The store is completely empty, the freezers have been looted and emptied, with a corpse actually stuck in one, with another draped over the counter." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere;
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "" << std::endl;
      break;
    }
    if(userChoice == "loot"){
      std::cout << "Unfortunately the store is looted to the last dime, not even a scrap of anything useful." << std::endl;
      break;
    }
    if(userChoice == "move"){
      std::cout << "Where would you like to move to? The 'entrance' hall?" << std::endl;//where would you like to move to?
      std::cin >> moveHere;
      std::transform(moveHere.begin(), moveHere.end(), moveHere.begin(), ::tolower);
      if(moveHere == "entrance"){
        x = 5;
        y = 5;
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

void ConvenienceStore::battle(Character c, int &s){
  std::cout << "A zombie stumbles out from the store and attacks." << std::endl;
  //build the required classes
  BasicZombie z;


  //get required ints and fix zombie later on, just stuck the values in for now
  int i = 0;
  int playerHealth = c.getHealth();
  int zombieHealth = z.getZHealth(i);
  int playerDamage = c.getDamage();
  int zombieDamage = z.getZDamage(i);
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
            std::cout << "The zombie attacks you for " << zombieDamage << " damage!" << std::endl;
            playerHealth = playerHealth - zombieDamage;
            int heal = c.getHealing();
            playerHealth = playerHealth + heal;
            std::cout << "You heal for " << heal << " hp and are now at " << playerHealth << " health." << std::endl;
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


