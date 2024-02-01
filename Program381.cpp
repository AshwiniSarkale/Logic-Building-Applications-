// Add template <class T> before evry function. Add <T> after consructor means add <T> after SinglyLL. Add <T> after every struct node word . struct node<T> *

#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    private:
        struct node<T> * first;
        int Count; 

    public:
        SinglyLL();
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
SinglyLL<T> :: SinglyLL()
{
    cout<<"Inside constructor\n";
    first = NULL;
    Count = 0;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    Count++;
}

template <class T>
void SinglyLL<T> :: InsertLast(T no)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = first;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
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
    }
    Count++;
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct node<T> *temp = first;

    cout<<"Elements of the Linked List are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }
    cout<<"NULL \n";
}

template <class T>
int SinglyLL<T> :: CountNode()
{
    return Count;
}

template <class T>
void SinglyLL<T> :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T> *temp = first;

        first = first->next;
        delete temp;
    }
    Count--;
}

template <class T>
void SinglyLL<T> :: DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
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
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}

template <class T>
void SinglyLL<T> :: InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > Count+1))
    {
        return;
    }

    if(ipos = 1)
    {
        InsertFirst(no);
    }
    else if(ipos = Count)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> *newn = new struct node<T>;
        newn->data = no;
        newn->next = NULL;

        struct node<T> *temp = first;
        int i = 0;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        Count++;
    }
}

template <class T>
void SinglyLL<T> :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > Count))
    {
        return;
    }

    if(ipos = 1)
    {
        DeleteFirst();
    }
    else if(ipos = Count)
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

        Count--;
    }
}

int main()
{
    
    return 0;
}