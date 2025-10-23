/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Declaration:A program that converts temperature from Fahrenheit to Celsius
C=(F-32)*5/9
*/

#include <stdio.h>
float Temp_converter(float temperature,float constant);

int main(){
	float constant=32;
	float result,temperature;
	
	//prompt the user to input the temperature
	printf("Input the temperature(In Fahrenheit):");
	scanf("%f",&temperature);
	
	//Function call
	result=Temp_converter(temperature,constant);
	
	//output
	printf("The Temperature_in_celsius is:%.1f\n",result);
	
	return 0;
}
//Function definition
float Temp_converter(float temperature,float constant){
	float Temperature_in_celsius;
	Temperature_in_celsius=(temperature-constant) * 5/9;
	return Temperature_in_celsius;

}

