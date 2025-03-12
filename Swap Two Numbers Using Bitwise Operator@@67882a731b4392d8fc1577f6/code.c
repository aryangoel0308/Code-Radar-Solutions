#include <stdio.h>

void swapUsingXOR(int *a, int *b) {
    if (a == b) return;  // Check if addresses are the same to avoid issues

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;
    
    // Read input values
    scanf("%d %d", &x, &y);

    // Perform XOR swap
    swapUsingXOR(&x, &y);

    // Corrected Output
    printf("%d %d\n", x, y);

    return 0;
}

