#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

void main() {
    // Get String
    string name = get_string("", "Enter your name: ");
    printf("Your Name: %s\n", name);

    // Get Integer
    int age = get_int("Enter your age: ");
    printf("your age: %d\n", age);

    // Get Double
    double gpa = get_double("Enter Your GPA: ");
    printf("your gpa: %.2lf\n", gpa);
}
