#include "Library.h"
#include "Book.h"
int main(){

Book b1;
Library l1; 

b1.getDocumentID();
l1.addDocument(&b1);
l1.hasDocument(&b1);


}