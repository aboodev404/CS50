#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

void main() {
    char ch[3];
    int i = 0;
    for(; i < 3; i++) {
        ch[i] = get_char("Enter The Char. %d: ", (i+1));
    }
    for(i = 2; i >= 0; --i) {
        printf("%c", ch[i]);
    }
}