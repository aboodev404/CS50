#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

void main() {
    string name = get_string("","enter the name: ");
    printf("your name: %s", name);
}