#include <stdio.h>

int main(){
    int n,a[100],i,count=0;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    avg = sum/n;
    for(i=0;i<n;i++)
        if(a[i]>avg) count++;

    printf("%d",count);
    return 0;
}
