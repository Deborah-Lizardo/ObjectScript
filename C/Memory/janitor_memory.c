#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory dynamically in the Heap
    int* ptr = (int*)malloc(sizeof(int));  // The janitor "allocates" memory in the Heap

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    *ptr = 10;  // Storing the value in the allocated memory
    printf("Value stored: %d\n", *ptr);

    free(ptr);  // The janitor frees the allocated memory

    printf("Memory was successfully cleaned up!\n");

    return 0;
}
