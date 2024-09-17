#include "../include/Bathrooms.h"
#include "../include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>

Bathrooms::~Bathrooms()
{
  //dtor
}

void Bathrooms::display(int &x, int &y, int &s){
  int b = 0;
  if(b == 0){
    void battle();
    b++;
  }
  int moved = 0;
  do{
    std::cout << "Its a dirty bathroom, honestly nothing really catches the eyes except the poor fools that got caught with their pants down. Literally." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere;
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "Well there are a few untouched 'stalls' you could go to if you really have to." << std::endl;
      break;
    }
    if(userChoice == "loot"){
      std::cout << "Its a bathroom. What do you want to take? The urinal? No." << std::endl;
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
      if(moveHere == "stalls"){
        std::cout << "As you go about your business, your hear a grumbling, thinking its just you, you ignore it and continue, only to have a large zombie crawl under the door of the stall. Never forget Rule 3." << std::endl;
        s = -1;
        x = 5;
        y = 5;
        moved = 1;
      }
      else
        std::cout << "That is not a viable location." << std::endl;
    }
    else
      std::cout << "That is not a viable command." << std::endl;
  }while (moved == 0);
}

