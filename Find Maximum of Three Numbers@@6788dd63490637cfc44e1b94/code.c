#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if((a>b) && (a>c)){
        printf("%d\n", a);
    }
    else if((b>a) && (b>c)){
        printf("%d\n", b);
    }
    else if((c>b) && (c>a)){
        printf("%d\n", c);
    }
    else if((a==b) && (b==c)){
        printf("%d\n", a);
    }
    return 0;
}