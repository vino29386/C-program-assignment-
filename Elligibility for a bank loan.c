/*
Name:Vincent melvin Kimanthi
Reg:  PA106/G/29386/25
*/
#include<stdio.h>
int main()
{
    float age ,annual_income;

   // prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%f",&age);

    // prompt the user to enter their annual income
    printf("Enter your annual income: ");
    scanf("%f",&annual_income);

    if(age>21 && annual_income>21000)
    {
        printf("You are eligible for a loan");
    }
    else
    {
        printf("You are not eligible for a loan");
    }
}