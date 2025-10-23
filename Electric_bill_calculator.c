/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Electric_bill_calculator
*/

#include <stdio.h>
//function prototype
float bill(float units);

int main(){
	float result,result_1,result_2,result_3,units;
	
	//prompt the user to enter the units used
	printf("Enter the number of units used:");
	scanf("%f",&units);
	
	if (units<=100){
		result_1=units * 10;
	}else if (units<=200){
		result_2=(100*10)+((units-100) * 15);
	}else{
		result_3=(100*10)+(100*15)+((units-200)*20);
	}
	//function call
	result=bill(units);
	
	//output
	printf("The Total_bill is:%f\n",result);
	return 0;
}

//function declaration
float bill(float units){
	float Total_bill;
	if (units<=100){
		Total_bill=units * 10;
	}else if (units<=200){
		Total_bill=(100*10)+((units-100) * 15);
	}else{
		Total_bill=(100*10)+(100*15)+((units-200)*20);
	}
	return Total_bill;
}