#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a>0 || b>0){
        printf("True\n");
    }
    else if (a<0 && b<0){
        printf("False\n");
    }
    else if (a==0 || b==0){
        printf("False\n");
    }
    return 0;

}