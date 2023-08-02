#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <stdbool.h>

void Login(string inputUser, string inputPass) {
    string useranme[2] = {"admin", "user"};
    string password[2] = {"admin", "pass"};
    bool isFound = false;

    for(int i = 0; i < 2; i++) {
        if(inputUser == useranme[i] && inputPass == password[i]) {
            isFound = true;
            break;
        }
    }

    if(isFound) {
        printf("Done Successfully..");
    } else {
        printf("username or password incorrect");
    }
}


void main() {
    Login("user", "pass");
}