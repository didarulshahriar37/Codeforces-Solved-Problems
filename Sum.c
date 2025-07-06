#include<stdio.h>

int foundsum (int a, int b, int c, int sum){    
    sum=0;    
    if (a+b == c || b+c == a || a+c == b){
        sum = 1;
    }
    return sum;
}

int main(){
    int t, a, b, c, sum;
    scanf("%d",&t);
    while (t--){
        scanf("%d %d %d",&a, &b, &c);
        int found = foundsum(a, b, c, sum);

        if (found){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}