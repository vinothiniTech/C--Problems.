#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for(i = 0; i < n; i++)
        scanf("%d", p + i);

    for(i = 0; i < n; i++)
        sum += *(p + i);

    printf("%d", sum);

    return 0;
}
