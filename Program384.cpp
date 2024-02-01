// DoublyLL Linear
// Add template <class T> before evry function. Add <T> after consructor means add <T> after SinglyLL.
// Add <T> after every struct node word . struct node<T> *
// Add in main function <int> after SinglyLL.

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct node<T> *first;
        int Count;

    public:
        DoublyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no, int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    cout<<"Inside constructor\n";

    first = NULL;
    Count = 0;
}  

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;     // #

    if(first == NULL)  // if(Count == 0)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;    // #
        first = newn;
    }
    Count++;
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = first;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;     // #

    if(first == NULL)  // if(Count == 0)
    {
        first = newn;
    }
    else
    {
       while(temp->next != NULL)
       {
           temp = temp->next;
       }
       temp->next = newn;
       newn->prev = temp;    // #
    }
    Count++;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct node<T> *temp = first;

    cout<<"Elements of the Linked List are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int DoublyLL<T>::CountNode()
{
    return Count;
}  

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if((first->next == NULL) && (first->prev == NULL))
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T> *temp = first;

        first = first->next;
        delete temp;
        first->prev = NULL;     // #
    }
    Count--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if((first->next == NULL) && (first->prev == NULL))
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T> *temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
    }
    Count--;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > Count+1))
    {
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> *temp = first;
        int i = 0;

        struct node<T> *newn = new struct node<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;    // #

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        temp->prev = temp;
    }
    Count++;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > Count))
    {
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp = first;
        int i = 0;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        struct node<T> *targatednode = temp->next;
        temp->next = temp->next->next;
        delete targatednode;
        temp->next->prev = temp;
    }
    Count--;
}

int main()
{
    DoublyLL <int>obj;
    int iRet = 0;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked List are : "<<iRet<<"\n";

    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked List are : "<<iRet<<"\n";

    obj.InsertAtPos(105, 5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked List are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked List are : "<<iRet<<"\n";


    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked List are : "<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked List are : "<<iRet<<"\n";

    return 0;
}   