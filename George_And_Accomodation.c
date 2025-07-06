#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p[101],q[101];
    for(int i=0; i<n; i++){
        scanf("%d %d",&p[i],&q[i]);
    }
    int available=0;
    for(int i=0; i<n; i++){
        if(q[i]-p[i]>=2){
            available++;
        }
    }
    printf("%d",available);
    return 0;
}