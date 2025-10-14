/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Description:Program to prompt user to enter height,bank balance,phone number
*/
#include <stdio.h>
int main()
{
    int height;
    
    printf("Enter your height:");
    scanf("%d" ,&height);
    printf("Your height is %d \n", height);
    int bankbalance;
    
    printf("Enter your bank balance:");
    scanf("%d" ,&bankbalance);
    printf("Your bank balance is %d \n", bankbalance);
    int phonenumber;
    
    printf("Enter your phonenumber:");
    scanf("%d" ,&phonenumber);
    printf("Your phonenumber is %d" , phonenumber);
    return 0;
    
}