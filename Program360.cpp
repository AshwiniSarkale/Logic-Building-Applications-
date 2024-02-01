#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int ivalue1 = 10, ivalue2 = 11, iRet = 0;
    float fvalue1 = 11.9, fvalue2 = 11.6, fRet = 0.0;
    double dvalue1 = 18.9, dvalue2 = 15.6, dRet = 0.0;

    iRet = Addition(ivalue1, ivalue2);
    cout<<"Addition is : "<<iRet<<"\n";

    fRet = Addition(fvalue1, fvalue2);
    cout<<"Addition is : "<<fRet<<"\n";

    dRet = Addition(dvalue1, dvalue2);
    cout<<"Addition is : "<<dRet<<"\n";

    return 0;
}