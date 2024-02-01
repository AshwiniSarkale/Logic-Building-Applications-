#include<iostream>
using namespace std;

int Addition(int Arr[], int Length)
{
    int Sum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size = 0, iCnt = 0, Ret = 0;
    int *ptr = NULL;
     
    // step 1 :
    cout<<"Enter number of elements : "<<"\n";
    cin>>Size;
    
    // step 2 :
    ptr = new int[Size];
    
    // step 3 :
    cout<<"Enter the elements : "<<"\n";
    for(iCnt = 0; iCnt < Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }
    
    // step 4 :  
    Ret = Addition(ptr, Size);

    cout<<"Addition of all element is : "<<Ret<<"\n";
    
    // step 5 :
    delete(ptr);    

    return 0;
}