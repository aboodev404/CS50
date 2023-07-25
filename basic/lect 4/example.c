#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

void main() {
    int size = get_int("Enter The Size Array: ");
    string arr[size];
    int i;

    printf("Enter elements of the array - \n");

    for(i = 0 ; i < size; i++)
    {
        // string a = get_string("", "Enter The Name: ");
        // arr[i] = a;

        arr[i] = get_string("Enter The Name: ");

        // scanf("%d",&arr[i]);
    }

    printf("Content of the array - \n");

    for(i = 0; i < size; i++)
    {
        printf("%s \n",arr[i]);
    }
}