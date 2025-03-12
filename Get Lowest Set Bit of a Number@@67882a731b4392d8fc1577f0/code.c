#include <stdio.h>
#include <math.h>

int getLowestSetBitPosition(int num) {
    if (num == 0) return 0;

    int position = 1;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    return position;
}


int main() {
    int num;
    
    scanf("%d", &num);

    int position = getLowestSetBitPosition(num);

    if (position == 0)
        printf("%d\n", 0);
    else
        printf("%d\n", position);

    return 0;
}
