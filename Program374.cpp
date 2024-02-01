#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int Length)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size = 0, iCnt = 0;
    float Ret = 0.0;
    float *ptr = NULL;
     
    // step 1 :
    cout<<"Enter number of elements : "<<"\n";
    cin>>Size;
    
    // step 2 :
    ptr = new float[Size];
    
    // step 3 :
    cout<<"Enter the elements : "<<"\n";
    for(iCnt = 0; iCnt < Size; iCnt++)
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