#include<stdio.h>

int main(){
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        int a = n/10;
        int b = n%10;
        printf("%d\n",a+b);
    }
}