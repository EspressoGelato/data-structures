 //
// Created by czh on 18-3-9.
//

#ifndef UNTITLED12_LIST_H
#define UNTITLED12_LIST_H

#include <stdio.h>
#include <malloc.h>

 typedef int Datatype;
 typedef struct Node* Pointer;
 typedef Pointer L;

 void InsertLastElement(Datatype x, Pointer L);
 Pointer FindAddress(Datatype x,Pointer L);
 void DeleteElement(Pointer L,Pointer P);
 void InsertSpecificElement(Datatype x,Pointer P);
 void Reverse(Pointer L);
 void show(Pointer L);
 Pointer CreateL(int N);
#endif //UNTITLED12_LIST_H

