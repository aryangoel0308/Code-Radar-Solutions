#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);  // Toggles the nth bit
}

int main() {
    int num, n;
    
    scanf("%d", &num);
    
    scanf("%d", &n);

    // Validate bit position (assuming a 32-bit integer)
    if (n < 0 || n > 31) {
        return 1;
    }

    // Toggle the nth bit and print the result
    int newNum = toggleNthBit(num, n);
    printf("%d\n",newNum);

    return 0;
}

