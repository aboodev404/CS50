#include <stdio.h>

void main() {
    /*
        // Row
        for(int i = 1; i <= 4; i++) {
            // Column
            for(int j = 0; j < 8; j++) {
                printf("*");
            }
            printf("\n");
        }
    */

    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            continue;
        }
        printf("%d\t", i);
    }
}