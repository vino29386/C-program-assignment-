/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Fare calculator
*/

#include <stdio.h>

//Function Prototype
float calculate_fare(float distance, float rate);

int main(){
	float rate=50.0;
	float distance,result;
	
	//prompt the user to enter the distance covered
	printf("Enter the distance covered in kilometers:");
	scanf("%f",&distance);
	
	//function call
	result=calculate_fare(distance,rate);
	
	//output
	printf("The Total_fare is :%.2f\n",result);
	
	return 0;
}
//Function definition
float calculate_fare(float distance,float rate){
	float Total_fare;
	Total_fare=distance * rate;
	
	return Total_fare;
}
