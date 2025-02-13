#include <stdio.h>
int main() {
    int a, b=2;
    scanf("%d", &a);
    if((a % 1) == 0 && (a % a) == 0){
        printf("Prime");
    }
    else if((a % 1) == 0 && (a % a) == 0 && (a % b) == 0 ){
        printf("Not Prime");
    }
    return 0;
}