#include <stdio.h>

int main() {
    int i, j, s;

    scanf("%d", &i);   // input number of rows

    for (int row = 1; row <= i; row++) {

        // print increasing numbers
        for (j = 1; j <= row; j++) {
            printf("%d", j);
        }

        // print spaces
        for (s = 1; s <= 2 * (i - row); s++) {
            printf(" ");
        }

        // print decreasing numbers
        for (j = row; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
