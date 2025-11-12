/*
Name: Vincent Melvin Kimanthi
Reg: PA106/G/29386/25
Declaration:
A small retail shop stores daily sales transactions in a file named sales.txt.
Each line contains the amount of a single transaction.
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    float amount, total = 0.0;
    int n, i;

    // Open file 
    fptr = fopen("C:\\Falcon\\sales.txt", "a");
    if (fptr == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Prompt the user to enter the number of transactions
    printf("Enter the number of transactions for today: ");
    scanf("%d", &n);

    // Prompt the user to enter transaction amounts
    for (i = 1; i <= n; i++) {
        printf("Enter amount for transaction %d: ", i);
        scanf("%f", &amount);
        fprintf(fptr, "%.2f\n", amount); 
    }

    fclose(fptr); 

    // Reopen file for reading
    fptr = fopen("C:\\Falcon\\sales.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not reopen file!\n");
        return 1;
    }

    // Read all transactions and calculate total
    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fptr);

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
