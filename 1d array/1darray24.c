#include<stdio.h>
int main() {
    int size;
    int arr[size];
    scanf("%d",&size,&arr[size]);
    for (int i=0;i<=size;i++)
        if (arr[i]==0) {
            printf("yes",&size);
        }
        else {
            printf("no",&size);
        }
    return 0;
}