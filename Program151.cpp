#include<iostream>
using namespace std;
 
class Array
{
    private:
        int *Arr; // int *Arr;
        int iSize;

     public:
        Array(int X)           // Parameterised constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }
        
        ~Array()                //  Destructor
        {
            delete []Arr;
        }

        void Accept()           // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()         // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        // Logics          
};  // End of class

int main()
{
    int iLength = 0;

    cout<<"Enter the elements that you want to store :"<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}