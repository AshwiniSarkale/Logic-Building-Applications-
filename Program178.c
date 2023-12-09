#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if(*Head == NULL)    // LL is empty
   {
       *Head = newn;
   }
   else
   {
       newn -> next = *Head;
       *Head = newn;
   }
}

void InsertLast(PPNODE Head, int no)
{
   // Temporary pointer for LL traversal
   PNODE temp = *Head;

   PNODE newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if(*Head == NULL)   // LL is empty
   {
       *Head = newn;
   }
   else
   {
       //  Travel the LL till last node
       while(temp->next != NULL)
       {
          temp = temp -> next;
       }
       // Add the address of new node at the end of last node
       temp->next = newn;
   }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)  // Case 1
    {
        return;
    }
    else if((*Head) -> next == NULL)  // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else  // Case 3
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)  // Case 1
    {
        return;
    }
    else if((*Head) -> next == NULL)  // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else  // Case 3
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    // Case 1 : Invalid position (Ex : 11 / -2 / 8)
    if((ipos < 1) || (ipos > Size+1))
    {
        printf("Invalid Position\n");
        return;
    }

    // Case 2 : First positin    (Ex : 1)
    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }

    // Case 3 : Last position    (Ex : 7)
    else if(ipos == Size + 1)
    {
        InsertLast(Head, no);
    }

    // Case 4 : Position is in between first and last  (Ex : 5)
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn; 
    }
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targatednode = NULL;
    int i = 0;

    // Case 1 : Invalid position (Ex : 11 / -2 / 8)
    if((ipos < 1) || (ipos > Size))
    {
        printf("Invalid Position\n");
        return;
    }

    // Case 2 : First positin    (Ex : 1)
    if(ipos == 1)
    {
        DeleteFirst(Head);
    }

    // Case 3 : Last position    (Ex : 6)
    else if(ipos == Size)
    {
        DeleteLast(Head);
    }

    // Case 4 : Position is in between first and last  (Ex : 5)
    else
    {
        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        targatednode = temp->next;

        temp->next = temp->next->next;
        free(targatednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First, 121);
    InsertLast(&First, 151);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&First, 105, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&First, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}