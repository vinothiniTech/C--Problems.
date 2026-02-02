#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = INT_MIN, second = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] < max && arr[i] > second) {
            second = arr[i];
        }
    }

    printf("%d", second);
    return 0;
}
