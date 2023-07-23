#include <stdio.h>

void main() {
    // printf("Hello, World!\nI am learning C");
    // printf("Hello, World!\tI am learning C");
    // printf("Hello, World!\\I am learning C");
    // printf("Hello, World!\"I am learning C");

    // datatype name = value;
    char ch[5] = "Ahmed";
    int age = 20;
    printf("my name: %s, and my age: %d\n",ch,age);

    float num1 = 5.2;
    double num2 = 956.69;
    printf("%f\n",num1);
    printf("%lf",num2);
}

/*
    Data Types:
    -- int: 2-4 byte ("%d || %i")

    -- float: 4 byte ("%f")
    -- double: 8 byte ("lf")
    
    -- char: 1 byte ("%c")
*/