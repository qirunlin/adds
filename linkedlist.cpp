#include"linkedlist.h"
Node* head=nullptr;
Node* n=nullptr;
Node* t=nullptr;
#include<string>
int error=0;
int B=0;
int c=0;



void linkedlsit::ptop(std::string array[],int size){
    if(size%2==0){
        error=1;
        std::cout<<"Error";
        exit(0);

    }

    
std::string newarray[size];
int even=1;
int odd=0;
for(int i=1;i<size+1;i++){
    if(i%2==0){
        newarray[size-i]=array[odd];
n=new Node;
n->Data=array[odd];
t=n;
t->next=head;
t=n;
head=n;
//std::cout<<head->Data;
odd++;


    }
    else{
newarray[size-i]=array[size-even];
n=new Node;
n->Data=array[size-even];
t=n;
t->next=head;
t=n;
head=n;
//std::cout<<head->Data<<"\n";
even++;
    }

}

double x2;
double r;
int check;
 r=std::stoi(head->Data);
 //std::cout<<r;
 n=head;
// n=n->next;
 //std::cout<<n->next->Data;
if(head->Data=="+"||head->Data=="-"||head->Data=="*"||head->Data=="/"){
    error=1;
    //std::cout<<"error2:"<<n->Data;

}
for(int i=0;i<size;i++){
    //std::cout<<i<<n->Data<<"\n";
    
    if(i==size-1){
        std::string errorC=n->Data;
        if(errorC=="+"||errorC=="-"||errorC=="*"||errorC=="/"){
    
    
                  error=1;
    //std::cout<<i<<"error3:"<<n->Data;
   

                                                            }
                }
    n=n->next;
}

 n=head;
for(int i=0;i<size;i++){
    
    //std::cout<<n->Data;
    //n=n->next;
    //std::cout<<newarray[i];
    
    
   
    // if(newarray[0]=='+'||'/'||'*'||'-'){
    //     std::cout<<"error2 \n";

    // }
    //  if(newarray[size]=='+'||'/'||'*'||'-'){
    //     std::cout<<"error1 \n";
    // }
   
    
    if(i%2!=0 && i>0){
        x2=stoi(n->next->Data);
        //std::cout<<"test"<<i;

        if(n->Data=="+"){
            r=r+x2;
            //std::cout<<r;

        }
         if(n->Data=="-"){
            r=r-x2;

        }
         if(n->Data=="/"){
            r=r/x2;

        }
         if(n->Data=="*"){
            r=r*x2;
            //std::cout<<r;
        }
    }
    if(i<size-1){
    if(n->next->Data=="+"||n->next->Data=="-"){
        c=1;
        
        std::cout<<"( ";
         B=0;
    }
    
    }
  
    std::cout<<n->Data<<" ";
    if(c==1)
    {
        B++;}
    
      if(B==3){
        std::cout<<") ";
        c=0;

    }
    n=n->next;
}
if(error==0){
std::cout<<"= "<<r;
}
if(error==1){
std::cout<<"Error";
}



}