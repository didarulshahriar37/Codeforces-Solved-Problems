#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int mag[n];
    for(int i=0; i<n; i++){
        scanf("%d",&mag[i]);
    }
    int groups=1;
    for(int i=0; i<n-1; i++){
        if(mag[i]!=mag[i+1]){
            groups++;
        }
    }
    printf("%d",groups);
    return 0;
}