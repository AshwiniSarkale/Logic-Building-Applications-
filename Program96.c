#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    //     1         2         3
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");   //  4
    }
    printf("\n");

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}

// Input : 3 , 4
// Output :   *  *  *  *
//            *  *  *  *
//            *  *  *  *  