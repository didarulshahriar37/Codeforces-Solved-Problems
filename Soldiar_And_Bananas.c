#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int total=0;
    for(int i=1; i<=w; i++){
        total+=k*i;
    }
    int to_borrow=0;
    if(total>n){
        to_borrow=total-n;
    }
    printf("%d",to_borrow);
    return 0; 
}