#include "Referee.h"
#include<iostream>

char Referee::refGame(Human p1,Computer p2){
p1.Pmove();
p2.computermove='r';
int Prps;
int Crps;
char outcome;

    if(p1.playermove=='R'){
        Prps=1;

    }
    if(p1.playermove=='P'){
        Prps=2;

    }
    if(p1.playermove=='S'){
        Prps=3;

    }
    if(p2.computermove=='r'){
        Crps=1;

    }if(p2.computermove=='p'){
        Crps=2;

    }if(p2.computermove=='s'){
        Crps=3;

    }


    if(Prps==3&&Crps==1){
        Crps=4;
    }
    if(Prps==1&&Crps==3){
        Prps=4;
    }
    if(Prps>Crps){
        outcome='W';
    }else if (Prps<Crps)
    {
        outcome='L';
    }else{
        outcome='T';

    }
    return outcome;
    
};
