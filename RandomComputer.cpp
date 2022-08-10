#include "RandomComputer.h"
#include <cstdlib>
#include <iostream>
void RandomComputer::Pmakemove(){
    srand (time(NULL));
    m= rand() %4+1;
    if(m==1){
    playermove='r';
    }
    if(m==2){
    playermove='p';
    }
    if(m==3){
    playermove='s';
    }
    
    

}