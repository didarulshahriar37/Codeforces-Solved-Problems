#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long f;

    if(n%2==0){
        f = n/2;
    }
    else{
        f = -((n+1)/2);
    }
    printf("%lld",f);
    return 0;
}