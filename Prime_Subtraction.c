#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    long long x,y;
    for (int i=0; i<t; i++) {
        scanf("%lld %lld",&x,&y);

        if (x-y>1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}