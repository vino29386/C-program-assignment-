/*
Name: Vincent Melvin Kimanthi
Reg: PA106/G/29386/25
Declaration:A university stores student examination results in a binary file
named results.dat.Each record contains a student’s name, registration number,
and total marks.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *fptr;
    struct Student student;
    int n, i;

    // Open file in binary write mode
    fptr = fopen("C:\\Falcon\\results.dat", "ab");
    if (fptr == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\Enter details for student %d:\n", i + 1);

        printf("Name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = 0; 

        printf("Registration Number: ");
        fgets(student.regNo, sizeof(student.regNo), stdin);
        student.regNo[strcspn(student.regNo, "\n")] = 0;

        printf("Total Marks: ");
        scanf("%f", &student.totalMarks);
        getchar();

        // Write record to file
        fwrite(&student, sizeof(struct Student), 1, fptr);
    }

    fclose(fptr);

    // Reopen the file to read and display the contents
    fptr = fopen("C:\\Falcon\\results.dat", "rb");
    if (fptr == NULL) {
        printf("Error: Could not reopen file!\n");
        return 1;
    }

    printf("**STUDENT EXAMINATION RESULTS**\n");
    
   // Read and display records
    while (fread(&student, sizeof(struct Student), 1, fptr) == 1) {
        printf("Name: %s\n", student.name);
        printf("Reg No: %s\n", student.regNo);
        printf("Total Marks: %.2f\n\n", student.totalMarks);
    }

    fclose(fptr);
    return 0;
}

