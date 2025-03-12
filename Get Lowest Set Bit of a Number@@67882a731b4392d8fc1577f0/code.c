#include <stdio.h>

int getLowestSetBitPosition(int num) {
    if (num == 0) return -1;  // Change return value to -1 if no set bit is found

    int position = 1;  // 1-based index
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

    if (position == -1)
        printf("0\n");  // If no bit is set, print 0
    else
        printf("%d\n", position - 1);  // Convert 1-based index to 0-based if required

    return 0;
}

