#include <stdio.h>

// data_type name_fun(arg1, arg2, ...) {body return value_date_type;}
int add(int num1, int num2) {
    printf("Hello From add Fun.\n");
    int sum = num1 + num2;
    return sum;
}

void main() {
    // Storage in varible or print
    // printf("%d", add(1,2)); // method 1
    int sum = add(1,2);
    printf("%d", sum);
}