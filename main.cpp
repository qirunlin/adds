#include "linkedlist.h"
#include<iostream>

using namespace std;
int main(){
    linkedlsit l1;
int x=0;
    string a1[10]={};
    for(int i=0;i<5;i++){
        cin>>a1[i];
        // if(a1[i].empty()){
        //     x--;   
        // }
         x++;
       
        cout<<"\n:"<<x;
    }

    l1.ptop(a1,x);
}