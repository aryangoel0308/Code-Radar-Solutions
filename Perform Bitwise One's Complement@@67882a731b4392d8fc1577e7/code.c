#include <stdio.h>

int main() {
    int num, result;

    // Input the number
    scanf("%d", &num);

    result = ~num;

    // Print the result
    printf("%d\n", result);

    return 0;
}
