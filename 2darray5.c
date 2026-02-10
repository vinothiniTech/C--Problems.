#include <stdio.h>
int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    int minSum = 0, index = 0;
    for(j = 0; j < c; j++)
        minSum += a[0][j];
    for(i = 1; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++)
            sum += a[i][j];
        if(sum < minSum) {
            minSum = sum;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}
