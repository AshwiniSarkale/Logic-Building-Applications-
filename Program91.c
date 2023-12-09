#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    //       1         2         3
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);   // 4
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the count : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Input : 6
// Output : 6  5  4  3  2  1