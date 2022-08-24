#include "Reverse.h"
#include <iostream>
#include <cmath>
using namespace std; 
#include <string>
int lastdigit=0;
int Reverse:: reverseDigit(int value){

int apow=std::to_string(value).length();




    if (value<0){
        return(-1);
    }
    
    if (value<=10){
        
        return value+lastdigit;;
    }
    //std::cout<<value%10;
    if(value>10){
     int correction =pow(10,apow-1);
    lastdigit=lastdigit+(value%10)*correction;
   apow=apow-1;
   
    //cout<<lastdigit<<"times\n";
    }

    
  


return reverseDigit(value/10);



};

string s;
string Reverse :: reverseString(string letters ){
int x=letters.length();
if(letters.length()<0){
    return("ERROR");

}


//cout<<x;
if (x==0){
    //cout<<s+letters;
    return s+letters;
    
}

//return reverseString(string s(1,letters));
//cout<<letters[x=x-1];
s=s+letters[x-1];
//cout<<s<<"\n";
letters.erase(letters.begin()+x-1);





    return reverseString(letters);

};