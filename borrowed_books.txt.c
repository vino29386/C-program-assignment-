/*
name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Declaration:borrowed_books.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char title[100];
    int choice = 0;

  
    while (choice != 3) {
        printf(" LIBRARY BORROWED BOOK SYSTEM\n");
        printf("1. Enter borrowed book titles\n");
        printf("2. Display borrowed book titles\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();

        // OPTION 1: enter titles
        if (choice == 1) {
            fptr = fopen("C:\\Falcon\\borrowed_books.txt", "a");
            if (fptr == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            // loop for entering titles
            printf("Enter book title (type 'stop' to finish): ");
            fgets(title, sizeof(title), stdin);
            title[strcspn(title, "\n")] = '\0';

            while (strcmp(title, "stop") != 0) {
                fprintf(fptr, "%s\n", title);
                printf("Saved: %s\n", title);

                printf("Enter book title (type 'stop' to finish): ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0';
            }

            fclose(fptr);
        }

        // OPTION 2: display titles
        else if (choice == 2) {
            fptr = fopen("C:\\Falcon\\borrowed_books.txt", "r");
            if (fptr == NULL) {
                printf("No record found.\n");
                continue;
            }

            printf(" --BORROWED BOOKS--\n");
            int count = 1;

            while (fgets(title, sizeof(title), fptr)) {
                printf("%d. %s", count, title);
                count++;
            }
            fclose(fptr);
        }

        else if (choice == 3) {
            printf("Exiting program...\n");
        }

        else {
            printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
