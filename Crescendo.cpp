#include "Crescendo.h"

void Crescendo ::Pmakemove(){
    movenumber++;
    if(movenumber==4){
        movenumber=1;
    };
    if(movenumber%1==0){
        playermove='p' ;

    };
    if(movenumber%2==0){
        playermove='s' ;

    };
     if(movenumber%3==0){
        playermove='r' ;

    };


}

