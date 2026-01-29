#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int s=1;s<=n-i;s++) {
            printf(" ");
        }
        for (int j=1;j<=2*i-1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n;i>0;i--) {
        for (int j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
