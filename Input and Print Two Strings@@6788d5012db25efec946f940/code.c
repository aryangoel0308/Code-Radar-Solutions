#include <stdio.h>

int main() {
    char str1[100], str2[100];  // Corrected variable name

    scanf("%s\n%s", str1, str2);  // Corrected format specifier and removed \n
    printf("You entered: %s and %s\n", str1, str2);  // Added newline for better output formatting

    return 0;
}
