#include<stdio.h>

int main() {
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);

    long long length = (n+a-1)/a;
    long long width = (m+a-1)/a;

    printf("%lld",length*width);
    return 0; 
}