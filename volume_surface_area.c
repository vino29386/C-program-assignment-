/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Declaration:Program to find the surface_area and Volume
Volume=M_PI*Radius*height
Surface_area=(2*M_PI*radius*radius)+(M_PI*diameter*height)
*/

#include <stdio.h>
#include <math.h>

//function prototype
float area(float Radius,float Diameter,float Height);
float volume(float Radius, float Height);

int main(){
	float Radius,Diameter,Height,result_1,result_2;
	
    printf("Enter the Radius:");
	scanf("%f",&Radius);
	
	printf("Enter the Diameter:");
	scanf("%f",&Diameter);
	
	printf("Enter the Height:");
	scanf("%f",&Height);
    
    //function call
    result_1=area(Radius,Diameter,Height);
    result_2=volume(Radius,Height);
    
    //output
    printf("The surface_area is :%.2f\n",result_1);
    printf("The Total_volume is:%.2f\n",result_2);
    
	return 0;
}

//function definition
float area(float Radius,float Diameter,float Height){
	float Surface_area;
	 Surface_area=(2*M_PI*Radius*Radius)+(M_PI*Diameter*Height);
	 return Surface_area;
}
float volume(float Radius, float Height){
	float Total_volume;
	Total_volume=M_PI*Radius*Radius*Height;
	return Total_volume;

}
