/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
New balance =balance-amount
*/
 #include <stdio.h>
 
 int main(){
	 int amount;
	 int balance=10000;
	 float Balance;
	 
	 printf("your available balance is 10000");
	 
	 //prompt the user to enter the amount to withdraw
	 printf(" \n Enter the amount to withdraw ");
	 scanf("%d",&amount);
	 
	 if (amount<balance){
		 printf("withdrawal successful \n");
		  Balance=balance - amount;
	 } else if(amount>balance){
		 printf("Withdrawal unsuccessful \n");
		 Balance=balance;
	 } else 
	 printf("your balance is %d,balance");
	 
	 //display the new balance
	 printf("Your New balance is:%f\n ",Balance);
	 return 0;
 }