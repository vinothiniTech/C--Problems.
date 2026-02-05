#include<stdio.h>
int main() {
    int n;
    int arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]>0) {
            printf("%d",arr[i]);
        }
        else {
            printf("%d",0);
        }
        printf("\n");


    }
    return 0;
}