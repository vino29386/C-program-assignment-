/*
Name:vincent melvin kimanthi
Reg :   PA106/G/29386/25
Description:program to compute simple interest
S_I= p * rate/100 * time 
*/ 

#include<stdio.h>

int main() {
    // variable decralation
    float principle , rate ,time ,simple_interest;

    //prompt the user to enter amount
    printf("enter the principle amount : ");
    scanf("%f",&principle);

    //prompt the user to enter rate
    printf("\n enter the rate : ");
    scanf("%f",&rate);

    //prompt the user to enter time
    printf("\n enter the time : ");
    scanf("%f",&time);

    //calculate simple interest
    simple_interest = (principle * rate * time) / 100;

    //display the result
    printf("\n the simple interest is : %f",simple_interest);

    return 0;
}