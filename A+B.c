#include<stdio.h>

int main(){
    int a, b, t, sum;

    scanf("%d",&t);
    while(t--){
        scanf("%d+%d",&a, &b);

        sum = a+b;

        printf("%d\n",sum);
    }

    return 0;
}