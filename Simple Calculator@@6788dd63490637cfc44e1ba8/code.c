#include <stdio.h>
int main() {
    int a, b;
    char ch;
    scanf("%d %d %c%c", &a, &b, &ch);
    if(ch == '+'){
        printf("%d\n", a+b);
    } 
    else if(ch == '-'){
        printf("%d\n", a-b);
    }
    else if(ch == '*'){
        printf("%d\n", a*b);
    } 
    else if(ch == '/'){
        printf("%d\n", a/b);
    } 
    return 0;
}