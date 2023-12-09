#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))  // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else   // LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))  // LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else   // LL contains atleast one node
    {
        (*Tail)->next = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{}
void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of Linked List are : \n");

    if((Head  != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ",Head->data);
            Head = Head -> next;
        } while(Head != Tail->next);

        printf("Address of First node \n");
    }
}

int Count(PNODE Head, PNODE Tail)
{
   return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;     // #
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);
    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}