#include <stdio.h>
#include <limits.h>

int main(){
    int n,a[100],i,min=INT_MAX,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0 && a[i]<min){
            min=a[i];
            found=1;
        }
    }
    if(found) printf("%d",min);
    else printf("No positive");
    return 0;
}
