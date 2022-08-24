#include "EfficientTruckloads.h"
using namespace std;
#include <iostream>

int EnumTruck=1;
int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    int p2;
    int p1;
     if(numCrates==0){
        return(0);

    }
    if(numCrates<=loadSize){
    return (EnumTruck);

}

if (loadSize<1|| loadSize>numCrates-1){
    cout<<EnumTruck;
    exit(1);

}
if (numCrates<2||numCrates>10000){
    cout<<"ERROR";
    exit(1);

}



// divide 

if (numCrates%2==0)
{
    int p1=numCrates/2;
     int p2=numCrates/2;
  EnumTruck=EnumTruck+1;
  EnumTruck=numTrucks(p2, loadSize);
//    cout<<EnumTruck<<"\n";
//    cout<<"p1:"<<p1<<"\n";
// cout<<"p2:"<<p2<<"\n";
    /* code */


 return numTrucks(p2, loadSize);
}
if (numCrates%2==1)
{
    //cout<<"num of crate:"<<numCrates<<"\n";
    p1=(numCrates/2)+1;
     p2=(numCrates/2);
       EnumTruck=EnumTruck+1;
//    cout<<EnumTruck<<"\n";
//    cout<<"ood p1:"<<p1<<"\n";
//     cout<<"ood p2:"<<p2<<"\n";
numTrucks(p1, loadSize);
return numTrucks(p2, loadSize);
    /* code */
}







return numTrucks(p1, loadSize);
return numTrucks(p2, loadSize);

};