#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

void main() {
    int numbers[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    
    // printf("%d", numbers[1][1]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }
}