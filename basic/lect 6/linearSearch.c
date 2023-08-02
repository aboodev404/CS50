#include <stdio.h>

int LinearSearch(int arr[], int size, int value) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

void main() {
    int nums[] = {2,4,0,1,9};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Size: %d\n", size);
    printf("%d", LinearSearch(nums, size, 5));
}