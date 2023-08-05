#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>

typedef struct Person
{
    int id;
    string name;
    string phone;
} P;

void main() {
    P p[2];
    p[0].id = 1;
    p[0].name = "Mohammed";
    p[0].phone = "123";

    p[1].id = 2;
    p[1].name = "Jaber";
    p[1].phone = "321";

    string value = "Jaber";

    for(int i = 0; i < 2; i++) {
        if(strcmp(p[i].name, value) == 0) {
            printf("%s", p[i].phone);
        }
    }
}