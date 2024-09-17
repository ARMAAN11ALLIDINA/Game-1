#include "include/EntranceHall.h"
#include "include/HelpDesk.h"
#include "include/ClothingStore.h"
#include "include/GameStore.h"
#include "include/ConvienceStore.h"
#include "include/Character.h"
#include "include/FountainPlaza.h"
#include "include/KitchenStore.h"
#include "include/GroceryStore.h"
#include "include/Sculpture.h"
#include "include/Security.h"
#include "include/GunStore.h"
#include "include/Pharmacy.h"
#include "include/Cafeteria.h"
#include "include/Restaurant.h"
#include "include/Bathrooms.h"
#include <iostream>

int main() {
  std::cout << "The year? 2023. The place? Some isolated town you can't remember the name of. You? You were on the way back from vacation excited to sleep in your own bed again. The situation? Your car's battery is dead, barely managed to get to the entrance of the mall, and it's totaled. Completely. Oh and zombies. several hundred of them. Did I forget to mention that? On your way to the mall you noticed a Helicopter on the roof, hopefully they saw you and are waiting, cause that's now your only hope of getting away." << std::endl;//insert beginning spiel
  std::cout << "What would you like to name your character?" << std::endl;
  std::string name;
  std::getline(std::cin, name);


  int strength;
  int agility;
  bool bad = false;

  /*
  std::cout << "enter stats within 1-5(strength, agility)" << std::endl;
  std::cin >> strength;
  std::cin >> agility;
  */

  do
  {
    std::cout << "Enter your character's strength within 1-5." << std::endl;
    std::cin>>strength;

    bad = std::cin.fail();
    if(bad)
      std::cout<<"Please enter numbers only."<<std::endl;
    std::cin.clear();
    std::cin.ignore(10, '\n');
  } while(bad);

  do
  {
    std::cout << "Enter your character's agility within 1-5." << std::endl;
    std::cin>>agility;
    bad = std::cin.fail();
    if(bad)
      std::cout<<"Please enter numbers only."<<std::endl;
    std::cin.clear();
    std::cin.ignore(10, '\n');
  } while(bad);

  Character ch(name, 10, strength, agility);
  //get them to choose their PC's class then implement it

  //encounter rates for the different areas
  int entranceEncounter = 0;
  int lowEncounter = 30;
  int moderateEncounter = 55;
  int highEncounter = 80;

  //all the different areas being built
  EntranceHall e(entranceEncounter);
  HelpDesk h(entranceEncounter);
  ClothingStore c(lowEncounter);
  GameStore g(lowEncounter);
  ConvenienceStore cs(lowEncounter);
  FountainPlaza fp(lowEncounter);
  GroceryStore gro(moderateEncounter);
  KitchenStore kit(lowEncounter);
  Sculpture sc(moderateEncounter);
  Security se(entranceEncounter);
  Bathrooms b(entranceEncounter);
  GunStore gu(moderateEncounter);
  Pharmacy ph(moderateEncounter);
  Cafeteria ca(highEncounter);
  Restaurant re(moderateEncounter);

  //ints for controlling the states of the game
  int survived = 0;
  int x = 5;
  int y = 5;
  int hasCard = 0;
  int keys = 0;

  //display options for the location using display function for the location classes.
  do{
    if(x == 5 && y == 5){
      e.display(x, y);
    }
    if(x == 5 && y == 6){
      h.display(x, y, keys, survived);
    }
    if(x == 6 && y == 6){
      g.display(x, y, ch, survived);
    }
    if(x == 5 && y == 4){
      c.display(x, y, ch, survived);
    }
    if(x == 6 && y == 4){
      cs.display(x, y, ch, survived);
    }
    if(x == 7 && y == 5){
      fp.display(x, y, ch, survived);
    }
    if(x == 8 && y == 5){
      kit.display(x, y, ch, survived);
    }
    if(x == 8 && y == 4){
      gro.display(x, y, ch, survived);
    }
    if(x == 7 && y == 7){
      sc.display(x, y, ch, survived);
    }
    if(x == 6 && y == 8){
      b.display(x, y, survived);
    }
    if(x == 6 && y == 7){
      if(keys >= 1)
        se.display(x, y, hasCard);
      else
      {
        std::cout << "Looks like the door needs a key to unlock it." << std::endl;
        x = 7;
        y = 7;
      }
    }
    if(x == 8 && y == 7){
      ph.display(x, y, ch, survived);
    }
    if(x == 8 && y == 8){
      gu.display(x, y, ch, survived);
    }
    if(x == 7 && y == 3){
      ca.display(x, y, ch, survived);
    }
    if(x == 8 && y == 3){
      re.display(x, y, ch, survived);
    }
    if(x == 6 && y == 3){
      if(hasCard == 1){
        std::cout << "The door opens with a slide of the keycard, and as you run out the door, through the hall, you hear the horde of zombies getting closer. But the more you run, the louder a new sound gets. As you exit to the roof, you see it. The Helicopter hasn't left yet! Running towards it you jump aboard, just as it takes off, you're finally safe." << std::endl;
        survived = 1;
      }
      if(hasCard == 0){
        std::cout << "The door requires a keycard." << std::endl;
        x = 7;
        y = 3;
      }
    }
  } while (survived == 0);
  if(survived == -1)
    std::cout << "Congrats you died! Thanks for playing and try again soon. Maybe try to go for the secret endings?" << std::endl;
  if(survived == 1 && keys <= 2)
    std::cout << "You've made it to safety and as you fly away, you look back to the mall. As you look back at the mall, you get the feeling that zombies weren't the only danger there." << std::endl;
  if(survived == 1 && keys == 3)
    std::cout << "As you collect the last key from the pocket, all the keys glow and float. They merge into one giant key, that then floats down in front of you, and as you grab the head, a voice calls out from behind you." << std::endl << "'So it chose you huh? Wonder how you'll turn out...'" << std::endl << "Continued in Kingdom Hearts 4,000,000.5, Death by Birth via Sleep in a Dream-Drop Distance." << std::endl << "Congrats you reached a secret ending! Now see how many others you can find!" << std::endl;
}

