#include <stdio.h>

int main() {
    int n, count = 0;

    scanf("%d", &n);

    for (; n > 0; n = n / 10) {
        if ((n % 10) % 2 == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}