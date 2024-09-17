#include "../include/EntranceHall.h"
#include "../include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>



EntranceHall::~EntranceHall()
{
  //dtor
}


void EntranceHall::display(int &x, int &y){
  int moved = 0;
  do{
    std::cout << "The entrance hall of the mall is a mess, racks of items tossed on the floor and dried blood covering what little of the floor is visible. The help desk looks clear and abandoned, with a few stragglers lingering in the clothing, game and convenience store. A little further on, you can see what appears to be a fountain, with a few zombies lurking around there." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere = "";
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "Looking closer shows several sets of bootprints leading away from the door to the fountain plaza. With the shops being somewhat abandoned, it's possible there might still be some items of use still lying around, while from where you're standing you can see a glint of light from the help desk." << std::endl;
      break;
    }
    if(userChoice == "loot"){
      std::cout << "The entrance hall has been picked clean already, and what hasn't been taken is damaged beyond repair." << std::endl;
      break;
    }
    if(userChoice == "move"){
      std::cout << "Where would you like to move to? The 'clothing' store, the 'game' store, the 'help' desk, the 'convenience' store, the mall 'doors', or the 'fountain'?" << std::endl;//where would you like to move to?
      std::cin >> moveHere;
      std::transform(moveHere.begin(), moveHere.end(), moveHere.begin(), ::tolower);
      std::cout << moveHere << std::endl;
      if(moveHere == "help"){
        x = 5;
        y = 6;
        moved = 1;
        break;
      }
      if(moveHere == "game"){
        x = 6;
        y = 6;
        moved = 1;
        break;
      }
      if(moveHere == "clothing"){
        x = 5;
        y = 4;
        moved = 1;
        break;
      }
      if(moveHere == "convenience"){
        x = 6;
        y = 4;
        moved = 1;
        break;
      }
      if(moveHere == "fountain"){
        x = 7;
        y = 5;
        moved = 1;
        break;
      }
      if(moveHere == "doors"){
        std::cout << "The doors are blockaded and through the side windows lies a hoard of zombies just waiting to make a meal out of you." << std::endl << "Looks like fighting through the mall is the only option." << std::endl;
        break;
      }
      else
        std::cout << "That is not a viable location." << std::endl;
    }
    else
      std::cout << "That is not a viable command." << std::endl;
  }while(moved == 0);
}

