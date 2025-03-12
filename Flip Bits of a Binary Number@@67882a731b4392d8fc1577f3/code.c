#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int flipped = ~num;  // Bitwise NOT operation
    printf("%d\n", flipped);  // Ensure it's treated as a signed integer

    return 0;
}
