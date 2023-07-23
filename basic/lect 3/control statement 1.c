#include <stdio.h>
#include <stdbool.h>

int num2 = 8;

void main() {
    int num = 0;
    if(5 > 7) {
        printf("Done\n");
        num += 5;

        int num2 = 6;
        printf("from if statement: %d\n", num2);
    } else if (5 == 5) {
        printf("equal\n");
        // Nested IF
        if((5-1) == 4) {
            num = 4;
        } else {
            num = -1;
        }
    } else {
        printf("not equal\n");
    }

    printf("%d\n", num);
    printf("Global: %d\n", num2);

    if(5 == 5 && num == 4) {
        printf("Successfully\n");
    }

    // condition ? true : false
    int time = 12;
    printf(time == 13? "12" : "0");
}