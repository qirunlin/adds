#include "linkedlist.h"
#include<iostream>
#include <vector>;
using namespace std;
int main(){
    linkedlsit l1;
int x;
    string a1[10]={};
    for(int i=0;i<100;i++){
        cin>>a1[i];
        x++;
    }

    l1.ptop(a1,x);
}