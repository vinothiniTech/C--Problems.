#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *start = arr;
    int *end = arr + n - 1;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
