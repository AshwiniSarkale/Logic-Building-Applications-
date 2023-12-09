#include<stdio.h>

float CalculatePercentage(float fMarks, float fTotal)
{
    auto float fPercentage = 0.0f;

    fPercentage = (((float)fMarks /(float) fTotal) * 100);
    return fPercentage;
}

int main()
{
    auto int fValue1 = 0;
    auto int fValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the marks : \n");
    scanf("%d",&fValue1);
    
    printf("Enter the total marks : \n");
    scanf("%d",&fValue2);
    
    fRet = CalculatePercentage(fValue1, fValue2);

    printf("Your percentage is : %f\n",fRet);

    return 0;
}