#include <stdio.h>
int main() {
    float radius, area;
    const float n = 3.14;
    scanf("%f", &radius);
    area = n * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}