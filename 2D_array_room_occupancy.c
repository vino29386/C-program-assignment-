/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Description: 2D Array – Room Occupancy (One Branch)
Each branch has 5 floors and each floor has 10 rooms.
*/

#include <stdio.h>

int main(){
    int occupancy[5][10]; 
    int floor, room;
    int occupied, vacant;
    //The Header
    printf(" Enter Room Occupancy Data \n");
    printf("Use 1 for occupied and 0 for vacant.\n\n");

    //promp the caretaker to enter the number of vacant and occupied rooms per floor.
    for (floor = 0; floor < 5; floor++) {
        printf("Enter data for Floor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("  Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
        printf("\n");
    }

    // Result
    printf("Final room Occupancy Report (One Branch)\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("\nFloor %d: ", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("%d", occupancy[floor][room]);
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\n -The occupied rooms are: %d\n", occupied);
        printf(" -The vacant rooms are: %d\n", vacant);
    }

    return 0;
}
