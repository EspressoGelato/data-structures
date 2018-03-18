//
// Created by czh on 18-3-9.
//
#include "list.h"

struct Node
{
    Datatype Element;
    Pointer AddressNext;
};

void InsertLastElement(Datatype x, Pointer L)
{
    Pointer TmpAddress;
    Pointer TmpNewAddress;

    TmpAddress = L;
    while (TmpAddress->AddressNext != NULL)
        TmpAddress = TmpAddress->AddressNext;

    TmpNewAddress = malloc(sizeof(struct Node));
    TmpAddress->AddressNext = TmpNewAddress;
    TmpNewAddress->AddressNext = NULL;
    TmpNewAddress->Element = x;
}

Pointer FindAddress(Datatype x,Pointer L)
{
    Pointer TmpAddress;
    TmpAddress=L->AddressNext;
    while(TmpAddress->AddressNext!=NULL&&TmpAddress->Element!=x)
        TmpAddress=TmpAddress->AddressNext;
    return TmpAddress;
}

void DeleteElement(Pointer L,Pointer P)
{
    Pointer TmpAddress;
    TmpAddress = L;
    while (TmpAddress->AddressNext != P)
        TmpAddress = TmpAddress->AddressNext;
    TmpAddress->AddressNext = P->AddressNext;
}


void show(Pointer L)
{
    Pointer TmpAddress = L->AddressNext;
    while (TmpAddress != NULL)
    {
        printf("%d  ", TmpAddress->Element);
        TmpAddress = TmpAddress->AddressNext;
    }
    printf("\n");
}

Pointer CreateL(int N)
{
    struct Node *head = malloc(sizeof(struct Node));

    head->AddressNext = NULL;
    Pointer L = head;

    for (int i = 1; i < N; i++)
    {
        InsertLastElement(i, L);
    }
    return L;


}


void InsertSpecificElement(Datatype x,Pointer P)
{
    Pointer NewAddress;
    NewAddress=malloc(sizeof(struct Node));

    Pointer TmpAddress=P->AddressNext;
    P->AddressNext=NewAddress;
    NewAddress->AddressNext=TmpAddress;
    NewAddress->Element=x;

}

void Reverse(Pointer L)
{
    if(L->AddressNext==NULL||L->AddressNext->AddressNext==NULL)
        return;
    Pointer P_0 = L;
    Pointer P = L->AddressNext;
    Pointer tmp;
    tmp = P->AddressNext;

    Pointer tmp_2;
    tmp_2 = tmp->AddressNext;

    tmp = tmp_2;
    P->AddressNext->AddressNext = NULL;

    Pointer tmp_1;

    while (tmp->AddressNext != NULL)
    {
        tmp_1 = tmp->AddressNext;
        tmp->AddressNext = P;
        P = tmp;
        tmp = tmp_1;

    }

    tmp->AddressNext = P;
    P_0->AddressNext = tmp;
}