#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);  // Set the nth bit using bitwise OR
}

int main() {
    int num, n;
    
    // Input number and bit position
    scanf("%d %d", &num, &n);

    // Set nth bit and print result
    int result = setNthBit(num, n);
    printf("%d\n", result);

    return 0;
}
