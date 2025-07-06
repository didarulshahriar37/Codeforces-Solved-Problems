#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    int m,a,b,c;
    while(t--) {
        scanf("%d %d %d %d",&m,&a,&b,&c);

        int row1=a, row2=b, row3=c;
        if (a>m) {
            row1=m;
        }
        int rem_a = m-row1;
        if (b>m) {
            row2=m;
        }
        int rem_b = m-row2;
        if (c>(rem_a+rem_b)) {
            row3 = (rem_a+rem_b);
        }

        printf("%d\n",row1+row2+row3);
    }

    return 0;
}