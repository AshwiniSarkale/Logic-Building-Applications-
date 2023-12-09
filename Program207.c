#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))   // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))   // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
   if((*Head == NULL) && (*Tail == NULL))    // LL is empty
   {
       return;
   }
   else if(*Head == *Tail)   // LL contains one node
   {
       free(*Head);
       *Head = NULL;
       *Tail = NULL;
   }
   else   // LL contains more than one node
   {
       *Head = (*Head)->next;
       free((*Tail)->next);  // free((*Head)->next);
       (*Head)->prev = *Tail;
       (*Tail)->next = *Head;
   }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))    // LL is empty
    {
       return;
    }
    else if(*Head == *Tail)   // LL contains one node
    {
       free(*Head);
       *Head = NULL;
       *Tail = NULL;
    }
    else   // LL contains more than one node
    {
      
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}
void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
           printf("| %d | <=> ",Head->data);
           Head = Head->next; 
        } while (Head != Tail->next);  
    }
    printf("\n");
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

     if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCnt++;
           Head = Head->next; 
        } while (Head != Tail->next); 
    }
    return iCnt;   
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}