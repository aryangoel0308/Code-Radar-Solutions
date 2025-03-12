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

