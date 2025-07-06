#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int a[t],b[t], count;
    for (int i=0; i<t; i++){
        scanf("%d %d",&a[i],&b[i]);

        if (a[i]%b[i]==0){
            count=0;
        }
        else{
            count=b[i]-(a[i]%b[i]);
        }
        printf("%d\n",count);
    }
    return 0;
}