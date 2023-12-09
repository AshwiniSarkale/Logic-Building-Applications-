// Problem Statement : Accept radious from user and calculate the area of circle

// step 1 : Understand the problem statment
// Conclusion : We are going to use the formula as PI*R*R

// Step 2 : Algorithm
/*
    START
        Accept radious from user and store into RADIUS 
        Create variable as PI and store value 3.14
        Calcuclate area PI * RADIUS * RADIUS
        Display the value of Area to the user
    STOP 
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateArea
//  Description : It is used to calculate area of circle
//  Input : Float
//  Output : Float
//  Author Name : Ashhwini Haribhau Sarkale
//  Date : 02/09/2023
//
////////////////////////////////////////////////////////////////////////

#define PI 3.14
float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;

    fAns = PI * fValue * fValue;
    return fAns;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//   Entry point function
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius); 

    printf("Area of circle is :%f\n",fArea); 

    return 0;
}