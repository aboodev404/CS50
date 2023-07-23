#include <stdio.h>
#include <stdbool.h>

void main() {
    int num1 = 4;
    int num2 = 2;

    // printf("add = %d\n", (num1+num2));
    // printf("sub = %d\n", (num1-num2));
    // printf("div = %d\n", (num1/num2));
    // printf("muli = %d\n", (num1*num2));
    // printf("mod = %d\n", (num1%num2));
    
    // printf("org = %d\n",num1);
    // printf("pre = %d\n",++num1);
    // printf("post = %d\n",num1++);

    // num1 += 5;
    // num2 *= 2; // num2 = num2 * 2;

    /* Constent */
    // printf("befor = %d\n",num1);
    // num1 = 5;
    // printf("after = %d\n",num1);

    // float sum = (int) 9.5;
    // printf("%.0f", sum);


    /* Boolean */
    bool isFound = true;
    printf("%d\n", isFound); // 1

    printf("%d\n", 5 > 7); // 0
    printf("%d\n", 5 < 7); // 1
    printf("%d\n", 5 == 5); // 1
    printf("%d\n", 5 >= 5); // 1
    printf("%d\n", 5 != 6); // 1
}