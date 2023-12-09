#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the chatracter : \n");
    scanf("%c",&ch);

    printf("ASCII value of the character in DECIMAL : %d\n",ch);
    printf("ASCII value of the character in OCTAL : %o\n",ch);
    printf("ASCII value of the character in HEXADECIMAL : %x\n",ch);

    return 0;
}