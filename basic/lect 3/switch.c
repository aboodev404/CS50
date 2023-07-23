#include <stdio.h>

void main() {
    int day = 2;

    switch (day) // 2
    {
    default:
        printf("the enter value, invlid");
        break;
    case 1:
        printf("Starday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    }
}