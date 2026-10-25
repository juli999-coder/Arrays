/*Juliet Mbugua
BCS-05-0218/2026
3Darray*/
#include <stdio.h>

int main() {
    int occupancy[3][5][10];
    int branch, floor, room;
    int occupiedCount[3] = {0, 0, 0};
    int vacantCount[3] = {0, 0, 0};

    // INPUT
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                printf("Branch %d Floor %d Room %d (0=Vacant 1=Occupied): ", branch+1, floor+1, room+1);
                scanf("%d", &occupancy[branch][floor][room]);
            }
        }
    }

    // COUNTING
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                if(occupancy[branch][floor][room] == 1) {
                    occupiedCount[branch]++;
                } else {
                    vacantCount[branch]++;
                }
            }
        }
    }

    // OUTPUT
    printf("\n--- Hotel Report ---\n");
    for(branch = 0; branch < 3; branch++) {
        printf("Branch %d: %d Occupied, %d Vacant out of 50\n", branch+1, occupiedCount[branch], vacantCount[branch]);
    }

    return 0;
}