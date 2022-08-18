#include "Library.h"
#include <iostream>


void Library::addDocument(Document* book){

   int libc=(libSize);
   int bookid=book->Documentid;

   storedBookid [libc]=bookid;
   libSize+1;


}
Document* Library::hasDocument(Document* book){
    int bookid=book->Documentid;
    
    for (int i=0;i<libSize;i++){
        if (bookid==storedBookid [i]){
             
             std::cout<<"Book with id="<<bookid<<"is founded \n ";
        }
    }
    
 return book; 
}
