#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

// DataType name_fun(arg1, arg2, arg3, ...) {body}
void Welcome(string name) {
    printf("Hello, %s\n", name);
}

void main() {
    // Call Function (void)
    // Welcome("Ahmed");
    // Welcome("Jaber");
    // Welcome("Abed");

    // Welcome(get_string("", "Enter The Name: "));

    char name[5];
    printf("Enter The Name: ");
    scanf("%s", &name);
    Welcome(name);
}