/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Fare calculator
*/

#include <stdio.h>

//function prototype
float calculatefare(float distance);

int main(){
	float rate=50.0;
	float fare,distance,result;
	
	//prompt the user to enter the distance covered 
	printf("Enter the distance covered:");
	scanf("%f",&distance);
	
	//function call
	result=calculatefare(distance,rate);
	
	//output
	printf("The Total_fare is:.2%f \n");
	
	return 0;
}
//function definition
float Total_fare(float distance){
	float Total_fare;
	Total_fare=distance * rate;
	return Total_fare;
}
