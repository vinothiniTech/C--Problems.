#include <stdio.h>

int main(){
    int n,k,a[100],temp[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);

    for(i=0;i<n;i++)
        temp[i] = a[(i+k)%n];

    for(i=0;i<n;i++) printf("%d ",temp[i]);
    return 0;
}
