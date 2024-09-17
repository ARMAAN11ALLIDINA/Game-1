#include "../include/HelpDesk.h"
#include "../include/BaseLocale.h"
#include <bits/stdc++.h>
#include <string>


HelpDesk::~HelpDesk()
{
  //dtor
}

void HelpDesk::display(int &x, int &y, int &k, int &s){
  int moved = 0;
  do{
    std::cout << "The help desk is abandoned of all things living and, in this case, undead. The only thing left is a rotted corpse, picked almost clean by the zombies. The glint that caught your eye appears to be the security badge that the poor sap was wearing, wonder what else they had on them." << std::endl;//description here
    std::cout << "What would you like to do? 'look' around, 'loot' what little might be there, or 'move' to a new location?" << std::endl;//menu options and description here
    std::string userChoice;
    std::string moveHere;
    std::cin >> userChoice;
    std::transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if(userChoice == "look"){
      std::cout << "Looking closer you notice that any weapons they had with them when they died were already gone, and the clothes they were wearing were ripped to shreds. Their pocket though was still somewhat attached, and a sound of jingling could be heard." << std::endl;
    }
    if(userChoice == "loot"){
      std::cout << "Picking through their pockets, you find yourself a small key, bland at first design, but with a third of an ornate design on the head. Wonder where it's for." << std::endl;
      k++;
      if(k == 3){
        s = 1;
        x = 5;
        y = 5;
        moved = 1;
      }
    }
    if(userChoice == "move"){
      std::cout << "Where would you like to move to? The 'entrance' hall?" << std::endl;//where would you like to move to?
      std::cin >> moveHere;
      std::transform(moveHere.begin(), moveHere.end(), moveHere.begin(), ::tolower);
      if(moveHere == "entrance"){
        x = 5;
        y = 5;
        moved = 1;
      }
      else
        std::cout << "That is not a viable location." << std::endl;
    }
    else
      std::cout << "That is not a viable command." << std::endl;
  }while(moved == 0);
}

