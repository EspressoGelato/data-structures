#include "list.h"

int main()
{
    int N;
    scanf("%d",&N);
    Pointer NewL=CreateL(N);
    show(NewL);
    Pointer tmp = FindAddress(N-1,NewL);
    DeleteElement(NewL,tmp);
    show(NewL);
    Pointer tmp_1=FindAddress(2,NewL);
    InsertSpecificElement(999,tmp_1);
    show(NewL);
    Reverse(NewL);
    show(NewL);

    return 0;
}