#include <stdio.h>

void checkNumbers(int a, int b) {
    if ((a > 0 && b < 0) || (a == 0 && b == 0)) {
        printf("True\n");
    } else {
        printf("Falsen");
    }
}

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    // Function call to check the condition
    checkNumbers(num1, num2);

    return 0;
}
