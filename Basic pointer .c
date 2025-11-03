#include <stdio.h>

int main() {
    int num = 10;       // Regular integer variable
    int *ptr;           // Pointer to an integer

    ptr = &num;         // Store the address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in pointer: %p\n", ptr);
    printf("Value pointed by pointer: %d\n", *ptr);

    return 0;
}
