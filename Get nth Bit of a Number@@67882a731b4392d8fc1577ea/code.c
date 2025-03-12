#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1; 
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);

    if (n < 0 || n > 31) {
        return 1;
    }

    int bit = getNthBit(num, n);
    printf("%d\n",num);

    return 0;
}
