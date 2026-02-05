#include <stdio.h>

int main(){
    int n,a[100],i,index=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        if(a[i]!=0) a[index++]=a[i];

    while(index<n) a[index++]=0;

    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
