/*
Name:Vincent Melvin Kimanthi
Reg NO:PA106/G/29386/25
Declaration:Water bill calculator
Total cost=units * cost_per_unit
*/

#include <stdio.h>

int main (){
	//variable decraration
	int units;
	float bill;
	
	//prompt the user to enter the units used
	printf("enter the units used.\t");
	scanf("%d",&units);
	
	//calculation of the bill
	if (units<=30){
		bill=units * 20.00;
	} else if (units<=60){
		bill=units * 25.00;
	} else {
		bill=units * 30.00;
	}
	
	//display the bill 
	printf("The total water bill is:%.2f ksh\n",bill);
	return 0;
}