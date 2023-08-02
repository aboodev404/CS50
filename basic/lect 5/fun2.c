#include <stdio.h>

int sum(int myNumbers[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += myNumbers[i];
    }

    return sum;
}

void main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    printf("%d", sum(myNumbers));
}