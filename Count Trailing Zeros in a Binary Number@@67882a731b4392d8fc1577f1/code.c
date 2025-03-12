#include <stdio.h>

int countTrailingZeros(unsigned int num) {
    if (num == 0) return 32; // All bits are zero

    int count = 0;
    while ((num & 1) == 0) { // Check if the last bit is 0
        count++;
        num >>= 1; // Shift right
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d\n", trailingZeros);

    return 0;
}
