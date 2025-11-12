/*
Name: Vincent Melvin Kimanthi
Reg: PA106/G/29386/25
Declaration:borrowed_books.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    int n, i;
    char title[100];

    // Open the file 
    fptr = fopen("C:\\Falcon\\borrowed_books.txt", "a");
    if (fptr == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Ask how many books were borrowed
    printf("How many books were borrowed today? ");
    scanf("%d", &n);
   

    // Get the title of each borrowed book
    for (i = 1; i <= n; i++) {
        printf("Enter title of book %d: ", i);
        fgets(title, sizeof(title), stdin);
        title[strcspn(title, "\n")] = 0; 
        fprintf(fptr, "%d. %s\n", i, title); 
    }

    fclose(fptr);
    printf("All book titles have been successfully saved to borrowed_books.txt\n");

    return 0;
}
