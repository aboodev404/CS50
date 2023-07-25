#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

void main() {
    int x = 5;
    // datatype name[size] = {v1, v2, v3, ..., vi};
    string names[5] = {"Ahmed", "Khaled", "Jaber", "Jober", "Mohammed"};
    for(int i = 0; i <= 4; i++) {
        printf("%s\n", names[i]);
    }

    int numbers[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    }
    
}