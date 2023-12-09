#include<stdio.h>

void Display()
{
    int iCnt = 0;
    //      1          2       3
    for(iCnt = 1; iCnt <= 6; iCnt++)
    {
        printf("*\t");  // 4
    }
    printf("\n");
}

int main()
{
    
    Display();

    return 0;
}

// Input :  1  2  3  4  5
// Output : *  *  *  *  *  