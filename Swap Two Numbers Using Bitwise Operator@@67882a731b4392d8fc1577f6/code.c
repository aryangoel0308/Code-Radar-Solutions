#include <stdio.h>

void swapUsingXOR(int *a, int *b) {
    if (a == b) return;  // Check if addresses are the same to avoid issues

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;
    
    // Input two numbers
    scanf("%d %d", &x, &y);

    printf("%d %d\n", x, y);
    
    // Swap using XOR
    swapUsingXOR(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}
