#include<stdio.h>

int plusOrMinus (int a, int b, int c){
    int isPlus = 0;
    if (a+b == c){
        isPlus = 1;
    }
    return isPlus;
}

int main(){
    int t;
    scanf("%d", &t);

    int a, b, c;
    while(t--){
        scanf("%d %d %d",&a, &b, &c);

        int true = plusOrMinus(a, b, c);

        if (true){
            printf("+\n");
        }
        else{
            printf("-\n");
        }
    }

    return 0;
}