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

int Frequency(PNODE Head, int no)
{
     int iCnt = 0;
    
    while(Head != NULL)
    {
        if((Head -> data) == no)
        {
            iCnt++;
        }
        Head = Head -> next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First, 111);
    InsertFirst(&First, 11);
    InsertFirst(&First, 50);
    InsertFirst(&First, 11);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Frequency(First, 11);
    printf("Frequency is : %d\n",iRet);

    return 0;
}
   