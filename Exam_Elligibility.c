/*
Name:Vincent Melvin kimanthi
Reg NO:PA106/G/29386/25
Declaration:Exam Elligibility
*/

#include <stdio.h>

int main(){
	
	int attendance;
	int average_marks;
	
	//prompt the user to enter his/her attendance
	printf("enter your attendance.\t");
	scanf("%d",&attendance);
	
	//prompt the user to enter his/her average marks
	printf("enter your average marks.\t");
	scanf("%d",&average_marks);
	
	if (attendance>=75 and average_marks>=40){
		printf("you are elligible to do final exam");
	}
	else {
		printf("you are not elligible to do final exam");
	}
	
	return 0;
}