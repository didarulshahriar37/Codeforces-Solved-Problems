#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int x=0;
    char statement[4];
    for (int i=0; i<n; i++) {
        scanf("%s",statement);
        
        if (statement[0]=='+' || statement[1]=='+') {
            x++;
        }
        else if (statement[0]=='-' || statement[1]=='-') {
            x--;
        }
    }

    printf("%d",x);

    return 0;
}