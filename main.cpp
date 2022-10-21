#include "linkedlist.h"
#include<iostream>
#include <vector>;
using namespace std;
int main(){
    linkedlsit l1;
int x;
    string a1[10]={};
    for(int i=0;i<10;i++){
        cin>>a1[i];
        x++;
        cout<<a1[i];
    }

    l1.ptop(a1,x);
}