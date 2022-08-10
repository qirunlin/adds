#include "Referee.h"
#include<iostream>

void Referee::gameref(Player* p1,Player* p2){

int Prps;
int Crps;

for(int i=0;i<5;i++){
p1->Pmakemove();
p2->Pmakemove();
    if(p1->playermove=='r'){
        Prps=1;

    }
    if(p1->playermove=='p'){
        Prps=2;

    }
    if(p1->playermove=='s'){
        Prps=3;

    }
    if(p2->playermove=='r'){
        Crps=1;

    }if(p2->playermove=='p'){
        Crps=2;

    }if(p2->playermove=='s'){
        Crps=3;

    }


    if(Prps==3&&Crps==1){
        Crps=4;
    }
    if(Prps==1&&Crps==3){
        Prps=4;
    }
    if(Prps>Crps){
        p1->playerscore++;
    }else if (Prps<Crps)
    {
        p2->playerscore++;
    }else{
        p2->playerscore=p2->playerscore+0;
        p1->playerscore=p1->playerscore+0;

    }
}
    if (p1->playerscore>=p2->playerscore)
    {
        winner=p1;
    }else{
        winner=p2;
    }

p2->playerscore=0;
p1->playerscore=0;
p2->movenumber=0;
p1->movenumber=0;
    

    
    
};