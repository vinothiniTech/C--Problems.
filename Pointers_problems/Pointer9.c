#include <stdio.h>
int main() {
    int n, i, x;
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for(i = 0; i < n; i++)
        scanf("%d", p + i);

    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(*(p + i) == x) {
            printf("%d", i + 1);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
