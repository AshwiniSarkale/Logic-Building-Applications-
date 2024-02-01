#include<stdio.h>

void Display()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    Display();

    return 0;
}

// 1 : Memory for local variables
// 2 : Input parameters
// 3 : Address of Next Instruction
// 4 : Value of old EBP