#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Crescendo.h"
#include "RandomComputer.h"
#include "Player.h"
#include "Tournament.h"
#include <iostream>
#include <cstdlib>
#include "Tournament.h"
#include "Avalanche.h"
#include "Human.h"
#include "Crescendo.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Referee.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "RandomComputer.h"

using namespace std;
int main(){
  
  RandomComputer computer;
 Crescendo c;
 human h;
 Bureaucrat b;
 Avalanche a;
 Toolbox t;
 PaperDoll p;
 FistfullODollars f;

  

  Tournament faker;


 
  array<Player*, 8> array = {&computer,&c,&h,&b,&a,&t,&p,&f};


faker.run(array);
// cout<<c;

  

}