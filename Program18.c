#include<stdio.h>

void DisplayExamTime(int istandard)
{
   switch(istandard)
   {
    case 1 :
         printf("your exam is at 8 Am\n");
         break;
    case 2 :
         printf("your exam is at 9 Am\n");
         break;
    case 3 :
         printf("your exam is at 10 Am\n");
         break;
    case 4 :
         printf("your exam is at 11 Am\n");
         break;
    case 5 :
         printf("your exam is at 12 Am\n");
         break;
   }
}

int main()
{
    int iValue = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}