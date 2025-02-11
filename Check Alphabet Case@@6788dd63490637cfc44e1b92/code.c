#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase\n");
    }
    else 
        printf("Lowercase\n");
    else if(ch>=0 && ch<=9){
        printf("Not an alphabet\n");
    }
    return 0;
}