#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Right shift num by n, then AND with 1
}

int main() {
    int num, n;
    
    // Prompt for user input (optional)
    scanf("%d", &num);
    
    scanf("%d", &n);

    // Validate bit position (assuming a 32-bit integer)
    if (n < 0 || n > 31) {
        return 1;
    }

    // Retrieve and print the nth bit
    int bit = getNthBit(num, n);
    printf("%d\n", bit);

    return 0;
}

