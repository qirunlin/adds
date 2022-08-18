#include "Document.h"
#include <vector>
 #ifndef LIBRARY_H
 #define LIBRARY_H



 class Library {

public:
void addDocument(Document* book);
Document* hasDocument(Document* book);
std::vector<int> storedBookid;
int libSize=0;

 };

 #endif