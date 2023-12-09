#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)  
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       iSum = iSum + Arr[iCnt];
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
        printf("\n Addition of all elements are %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);   
    }

    iRet = Addition(ptr, iCount);

    printf("Addition of all elements are ; %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated sucessfully...\n");

    return 0;
}