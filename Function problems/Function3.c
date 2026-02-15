#include <stdio.h>

void EvenOdd(int n) {
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main() {
    int n;
    scanf("%d", &n);
    EvenOdd(n);
    return 0;
}
