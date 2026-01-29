#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=5;i>=0;i--) {
        for (int j=1;j<i+1;j++) {
            printf("%c",64+j);
        }
        printf("\n");
    }
}