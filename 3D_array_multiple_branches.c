/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Description: 3D Array – Multiple Branches (Manual Input)
Each hotel chain has 3 branches, each with 5 floors and 10 rooms per floor.
*/

#include <stdio.h>

int main(){
    int chain[3][5][10];
    int branch, floor, room;
    int occupied, vacant;
    int total_occupied = 0, total_vacant = 0;
    int branch_occupied = 0, branch_vacant = 0;

    // Prompt the user to enter the records
    //The header
    printf("Enter Room Occupancy Data for All Branches\n");
    printf("Use 1 for occupied and 0 for vacant.\n\n");

    // Input occupancy data for all branches
    for (branch = 0; branch < 3; branch++) {
        printf("\n  Branch %d \n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            printf("Enter data for Floor %d (10 rooms):\n", floor + 1);

            for (room = 0; room < 10; room++) {
                printf("  Room %d: ", room + 1);
                scanf("%d", &chain[branch][floor][room]);
            }
            printf("\n");
        }
    }

    // Results
    printf("\n  Hotel Chain Occupancy Report \n");

    for (branch = 0; branch < 3; branch++) {
        branch_occupied = 0;
        branch_vacant = 0;
        printf("\n   Branch %d\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            occupied = 0;
            vacant = 0;

            printf("Floor %d: ", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("%d", chain[branch][floor][room]);
                if (chain[branch][floor][room] == 1) {
                    occupied++;
                } else {
                    vacant++;
                }
            }

            printf("\n -Occupied rooms: %d", occupied);
            printf("\n -Vacant rooms: %d\n\n", vacant);

            branch_occupied += occupied;
            branch_vacant += vacant;
        }
        //The occupation of each branch
        printf("Total occupied rooms in Branch %d: %d\n", branch + 1, branch_occupied);
        printf("Total vacant rooms in Branch %d: %d\n", branch + 1, branch_vacant);

        total_occupied += branch_occupied;
        total_vacant += branch_vacant;
    }
    //the final 
    printf("\n  Overall Summary \n");
    printf("Total occupied rooms across all branches: %d\n", total_occupied);
    printf("Total vacant rooms across all branches: %d\n", total_vacant);

    return 0;
}
