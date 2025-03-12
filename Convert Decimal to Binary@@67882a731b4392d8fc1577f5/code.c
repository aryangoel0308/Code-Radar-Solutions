#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];  // Array to store binary digits (max 32 bits for int)
    int i = 0;

    while (num > 0) {
        binary[i] = num & 1;  // Extract the least significant bit
        num >>= 1;            // Right shift the number
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    decimalToBinary(num);
    printf("\n");

    return 0;
}
