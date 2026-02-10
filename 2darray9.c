#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int balancedCount = 0;
    for(int i = 0; i < r; i++) {
        int even = 0, odd = 0;
        for(int j = 0; j < c; j++) {
            if(a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
        if(even == odd)
            balancedCount++;
    }
    printf("%d", balancedCount);
    return 0;
}
