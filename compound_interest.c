/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Declaration:How to find the compound interest
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, compounding_years, compound_intrest, final_amount;

    printf("enter princple:");
    scanf("%f", &principle);

    printf("enter rate:");
    scanf("%f", &rate);

    printf("enter time:");
    scanf("%f", &time);

    printf("enter compounding_years:");
    scanf("%f", &compounding_years);

    final_amount = principle * powf((1 + rate / 100.0f), time * compounding_years);

    compound_intrest = final_amount - principle;

    printf("your compound_intrest is ksh %.2f", compound_intrest);

    return 0;
}
