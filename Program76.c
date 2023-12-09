#include<stdio.h>
#include<stdlib.h>

int EvenAddition(int Arr[], int iSize)  
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
           iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated sucessfully for %d elemnts\n",iCount);

    printf("Enter the %d values : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)   
    {
        printf("\n Enter the elements no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);   
    }

    iRet = EvenAddition(ptr, iCount);

    printf("Addition of all even elements are ; %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated sucessfully...\n");

    return 0;
}