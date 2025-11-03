#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // points to arr[0]

    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p, Value: %d\n", i, ptr, *ptr);
        ptr++; // move pointer to next integer
    }

    return 0;
}
