#include "../include/Pharmacy.h"
#include "../include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>

Pharmacy::~Pharmacy()
{
  //dtor
}

void Pharmacy::display(int &x, int &y, Character c, int &s){
  int b = 0;
  if(b == 0){
    battle(c, s);
    b++;
    if(s == -1)
      return;
  }
  int moved = 0;
  do{
    std::cout << "As you enter the Pharmacy, its shockingly still pretty clean. Seems most people made a beeline for the gun store, leaving the pharmacy behind for protection." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere;
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "Most of the obvious medical supplies have been taken, leaving behind the machines that did the hard work making them." << std::endl;
      break;
    }
    if(userChoice == "loot"){
      std::cout << "Behind a glass cabinet you see a set of needles, with the label adrenaline shots, needless to say you break it open and grab them." << std::endl;
      int shots = 1;
      c.setHealing(shots);
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

void Pharmacy::battle(Character c, int &s){
  std::cout << "Two zombies dressed in doctors coats stumble out from the back and rush you. Talk about the irony." << std::endl;
  //build the required classes
  BasicZombie z;
  BasicZombie z2;


  //get required ints and fix zombie later on, just stuck the values in for now
  int i = 0;
  int playerHealth = c.getHealth();
  int zombieHealth = z.getZHealth(i);
  int zombie2Health = z.getZHealth(i);
  int playerDamage = c.getDamage();
  int zombieDamage = z.getZDamage(i);
  int zombie2Damage = z.getZDamage(i);
  int battleEnd = 0;

  //main loop of battle
  do{
    int turn = 0;
    if(playerHealth >= 1){
      if(zombieHealth >= 1 && zombie2Health >= 1){
        do{
          std::string choice = "";
          std::cout << "What would you like to do?" << std::endl << "'attackz1'" << std::endl << "'attackz2'" << std::endl << "'heal'" << std::endl;
          std::cin >> choice;
          if(choice == "attackz1"){
              if(zombieHealth >= 1 && zombie2Health >= 1){
                std::cout << "You attack dealing " << playerDamage << " damage to the zombie!" << std::endl;
                zombieHealth = zombieHealth - playerDamage;
                std::cout << "The zombies attacks you for " << zombieDamage + zombie2Damage << " damage!" << std::endl;
                playerHealth = playerHealth - (zombieDamage + zombie2Damage);
              }
              if(zombieHealth >= 1 && zombie2Health <= 0){
                std::cout << "You attack dealing " << playerDamage << " damage to the zombie!" << std::endl;
                zombieHealth = zombieHealth - playerDamage;
                std::cout << "The zombie attacks you for " << zombieDamage << " damage!" << std::endl;
                playerHealth = playerHealth - zombieDamage;
              }
              else if(zombieHealth <= 0)
                std::cout << "The zombie has already fallen and is no longer moving." << std::endl;
          }
          else if(choice == "attackz2"){
              if(zombie2Health >= 1 && zombieHealth >= 1){
                std::cout << "You attack dealing " << playerDamage << " damage to the zombie!" << std::endl;
                zombie2Health = zombie2Health - playerDamage;
                std::cout << "The zombies attacks you for " << zombieDamage + zombie2Damage << " damage!" << std::endl;
                playerHealth = playerHealth - (zombieDamage + zombie2Damage);
              }
              if(zombie2Health >= 1 && zombieHealth <= 0){
                std::cout << "You attack dealing " << playerDamage << " damage to the zombie!" << std::endl;
                zombie2Health = zombie2Health - playerDamage;
                std::cout << "The zombie attacks you for " << zombie2Damage << " damage!" << std::endl;
                playerHealth = playerHealth - zombie2Damage;
              }
              else if(zombie2Health <= 0)
                std::cout << "The zombie has already fallen and is no longer moving." << std::endl;
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
      if(zombieHealth <= 0 && zombie2Health <= 0){
        std::cout << "The bloodied corpses of the zombies fall to the ground dead, forever now. You've survived this battle." << std::endl;
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

