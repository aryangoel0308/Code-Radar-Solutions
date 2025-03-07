#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two numbers
    scanf("%d", &num1);
    scanf("%d", &num2);

    result = num1 >> num2;

    // Print the result
    printf("%d\n",result);

    return 0;
}