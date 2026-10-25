/*Juliet Mbugua
BCS-05-0218/2026
2DArray*/



#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Let user enter
    for(floor = 0; floor < 5; floor++) {
        printf("\n--- FLOOR %d ---\n", floor+1);
        for(room = 0; room < 10; room++) {
            printf("Enter for Room %d (1=occupied, 0=vacant): ", room+1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Now count
    printf("\n--- REPORT ---\n");
    for(floor = 0; floor < 5; floor++) {
        occupied = 0; // RESET to 0 for every new floor!
        vacant = 0;

        for(room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor+1, occupied, vacant);
    }

    return 0;
}