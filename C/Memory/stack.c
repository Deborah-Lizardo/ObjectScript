#include <stdio.h>
// ex2
// Recursive function without a base case (infinite recursion)
void infiniteFunction(int num) {
    printf("Calling the function with number: %d\n", num);
    // Calls itself indefinitely without a stopping condition (infinite recursion)
    infiniteFunction(num + 1);
}

int main() {
    infiniteFunction(1);  // This code will keep calling the function indefinitely
    return 0;
}
