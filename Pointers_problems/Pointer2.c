#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for(i = 0; i < n; i++)
        scanf("%d", p + i);

    int max = *p;

    for(i = 1; i < n; i++) {
        if(*(p + i) > max)
            max = *(p + i);
    }

    printf("%d", max);

    return 0;
}
