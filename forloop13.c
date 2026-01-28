#include<stdio.h>
int main() {
    int sum = 0,N,M;
    scanf("%d%d", &N, &M);
    for (int i=1;i<=N;i++) {
        sum += i;
        printf("%d\n", sum);
    }
 return 0;
}