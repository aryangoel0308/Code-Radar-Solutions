#include <stdio.h>
#include <math.h>

int getLowestSetBitPosition(int num) {
    if (num == 0)
        return 0;  // No set bit in zero
    
    return log2(num & -num) + 1;
}

int main() {
    int num;
    
    scanf("%d", &num);

    // Find lowest set bit position
    int position = getLowestSetBitPosition(num);

    if (position == 0)
        printf("0");
    else
        printf("%d\n", position);

    return 0;
}
