#include <stdio.h>
int main() {
    int r, c, i, j, k;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    int maxUnique = 0, index = 0;
    for(i = 0; i < r; i++) {
        int count = 0;
        for(j = 0; j < c; j++) {
            int unique = 1;
            for(k = 0; k < j; k++) {
                if(a[i][j] == a[i][k]) {
                    unique = 0;
                    break;
                }
            }
            if(unique) count++;
        }
        if(count > maxUnique) {
            maxUnique = count;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}
