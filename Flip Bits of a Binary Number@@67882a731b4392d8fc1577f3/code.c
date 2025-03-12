#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    return ~num; // Bitwise NOT operation
}

int main() {
    unsigned int num;
    scanf("%u", &num); // Input a 32-bit unsigned integer

    unsigned int flipped = flipBits(num);
    printf("%u\n", flipped); // Print the flipped result

    return 0;
}
