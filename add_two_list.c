/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



int SmallVal(struct ListNode* p1, struct ListNode* p2)
{
    int smallval;
    if(p1->val<=p2->val)
        smallval= p1->val;
    else
        smallval= p2->val;
    return smallval;        
    
}

 struct ListNode* CreateStruct()
 {
     struct ListNode* Newpoint=malloc(sizeof(struct ListNode));
     Newpoint->next=NULL;
     return Newpoint;

 }


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* NewList = NULL;
    if(l1==NULL && l2 == NULL)
        return NewList;
    NewList=malloc(sizeof(struct ListNode));
    NewList -> next = NULL;
    struct ListNode* tmp;
    tmp=NewList;
    
    struct ListNode* newNode;
    while(l1!=NULL&&l2!=NULL)
    {       
        newNode = CreateStruct();
        newNode->val=SmallVal(l1,l2);
        
        if(l1->val<=l2->val)
            l1=l1->next;
        else
            l2=l2->next;
        tmp->next = newNode;
        tmp = tmp -> next;       
     }
    if (l1==NULL&&l2!=NULL)
        tmp->next=l2;
    else
        tmp->next=l1;
    NewList = NewList -> next;
    return NewList;    
}