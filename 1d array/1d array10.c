#include <stdio.h>

int main(){
    int n,a[100],i,max=-1,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=n-1;i>=0;i--){
        temp = a[i];
        a[i] = max;
        if(temp > max) max = temp;
    }

    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
