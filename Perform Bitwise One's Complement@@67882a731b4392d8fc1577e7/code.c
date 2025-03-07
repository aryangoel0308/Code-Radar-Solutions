#include <stdio.h>

int main() {
    int num, result;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    result = ~num;

    // Print the result
    printf("One's complement of %d is: %d\n", num, result);

    return 0;
}
