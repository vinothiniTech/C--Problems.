#include <stdio.h>

int main(){
    int n,a[100],i,j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
        }
        if(flag==0) printf("%d ",a[i]);
    }
    return 0;
}
