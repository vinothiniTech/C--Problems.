#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c], count = 0;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(int i = 0; i < r; i++) {
        int left = 0, right = c - 1;
        int isPalin = 1;
        while(left < right) {
            if(a[i][left] != a[i][right]) {
                isPalin = 0;
                break;
            }
            left++;
            right--;
        }
        if(isPalin)
            count++;
    }
    printf("%d", count);
    return 0;
}
