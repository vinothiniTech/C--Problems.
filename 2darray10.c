#include <stdio.h>
#include <limits.h>
int main() {
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    long maxProduct = LONG_MIN;
    int maxRow = 0;
    for(int i = 0; i < r; i++) {
        long  product = 1;
        for(int j = 0; j < c; j++) {
            product *= a[i][j];
        }
        if(product > maxProduct) {
            maxProduct = product;
            maxRow = i;
        }
    }
    printf("%d", maxRow);
    return 0;
}