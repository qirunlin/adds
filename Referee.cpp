#include "Referee.h"
#include<iostream>

void referee::gameref(human p1,computer p2){
p1.Pmove();
p2.computermove='r';
int Prps;
int Crps;

    if(p1.playermove=='r'){
        Prps=1;

    }
    if(p1.playermove=='p'){
        Prps=2;

    }
    if(p1.playermove=='s'){
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
        std::cout<<"Human wins";
    }else if (Prps<Crps)
    {
        std::cout<<"Computer wins";
    }else{
        std::cout<<"Draw";

    }
    
};