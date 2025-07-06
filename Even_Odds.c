#include<stdio.h>

int main(){
    long long n,k;
    scanf("%lld %lld",&n,&k);

    long long odd_numbers = (n+1)/2;

    if (odd_numbers>=k){
        printf("%lld",2*k-1);
    }
    else{
        k -= odd_numbers;
        printf("%lld",2*k);
    }

    return 0;
}