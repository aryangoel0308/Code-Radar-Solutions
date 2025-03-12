#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32;  // All bits are zero

    int count = 0;
    for (int i = 31; i >= 0; i--) {  // Start from MSB (bit 31)
        if (num & (1 << i)) break;  // Stop when we find the first '1'
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}
