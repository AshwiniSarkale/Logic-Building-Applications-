#include<stdio.h>

void Display()
{
    int i = 0, j = 0;
    
    //    1      2      3
    for(i = 1; i <= 3; i++)
    {   //    1       2     3
        for(j = 1; j <= 4; j++)
        {
           printf("*\t");  // 4
        }
        printf("\n");
    }
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