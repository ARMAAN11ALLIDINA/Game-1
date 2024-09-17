#include "../include/Security.h"
#include "../include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>

Security::~Security()
{
  //dtor
}

void Security::display(int &x, int &y, int &card){
  int b = 0;
  if(b == 0){
    void battle();
    b++;
  }
  int moved = 0;
  do{
    std::cout << "After finally arriving to the security room, you see it's empty of the carnage that fills the rest of the mall. Screens flicker as you see the cameras panning over the mall, and the roof." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere;
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "It takes a few seconds but the roof camera finally pans over to the makeshift helipad and sure enough, its still there, presumably waiting for you to get there." << std::endl;
      break;
    }
    if(userChoice == "loot"){
      std::cout << "Looking down at the desk you see the keycard laying there, and you grab it. Now go and get yourself out of this nightmare!" << std::endl;
      card = 1;
      break;
    }
    if(userChoice == "move"){
      std::cout << "Where would you like to move to? The 'sculpture'?" <<std::endl;//where would you like to move to?
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

