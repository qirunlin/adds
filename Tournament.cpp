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
#include <iostream>
using namespace std;

Player* Tournament ::run(std::array<Player*, 8>competitors){
    Referee r1;
    std::array<Player*, 4>competitors2;
    std::array<Player*, 2>competitors3;
int w=0;
int w2=0;
    for(int i=0;i<7;i=i+2){
       
       
       
            r1.gameref(competitors.at(i),competitors.at(i+1));
            competitors2.at(w)=r1.winner;
    w++; 

    }

    for(int g2=0;g2<3;g2=g2+2){
        
        r1.gameref(competitors2.at(g2),competitors2.at(g2+1));
       
        competitors3.at(w2)=r1.winner;
        w2++;

    }

     r1.gameref(competitors3.at(0),competitors3.at(1));


     //cout<<r1.winner->playerid;
     //cout<<r1.winner;
     return r1.winner;

    





 
    
}