#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
     
    printf("Value of iNo is : %d\n",iNo);
    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);  // 721
    iNo = iNo /10;   // 72
    printf("Number is : %d\n",iNo);

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);  // 72
    iNo = iNo /10;   // 7
    printf("Number is : %d\n",iNo);

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);  // 7
    iNo = iNo /10;   // 0
    printf("Number is : %d\n",iNo);

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);  // 0
    iNo = iNo /10;   // 0
    printf("Number is : %d\n",iNo);

}

int main()
{
    int iValue = 721;

    //printf("Enter number : \n");
    //scanf("%d",&iValue);

    Display(iValue);

    return 0;
}