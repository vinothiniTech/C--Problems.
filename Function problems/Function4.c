#include <stdio.h>

float area(int r) {
    return 3.14 * r * r;
}

int main() {
    int r;
    scanf("%d", &r);
    printf("%.2f", area(r));
    return 0;
}
