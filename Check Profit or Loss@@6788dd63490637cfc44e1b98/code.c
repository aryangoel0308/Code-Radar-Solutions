#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(b > a){
        printf("Profit");
    }
    else if(b < a){
        printf("Loss");
    }
    else if(b == a){
        printf("No Profit No Loss");
    }
    return 0;
}