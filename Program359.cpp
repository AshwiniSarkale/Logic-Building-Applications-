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
    double value1 = 10.9, value2 = 11.6, Ret = 0.0;

    Ret = Addition(value1, value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}