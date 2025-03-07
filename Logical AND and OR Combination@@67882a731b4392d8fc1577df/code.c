#include <stdio.h>

void checkNumbers(int a, int b) {
    if ((a > 0 && b < 0) || (a == 0 && b == 0)) {
        printf("Condition met!\n");
    } else {
        printf("Condition not met.\n");
    }
}

int main() {
    int num1, num2;
    
    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Function call to check the condition
    checkNumbers(num1, num2);

    return 0;
}
