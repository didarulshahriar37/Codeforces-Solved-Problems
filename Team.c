#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int petya,tonya,vasya,count=0;
    while (n--) {
        scanf("%d %d %d",&petya,&vasya,&tonya);

        if (petya+vasya+tonya >= 2) {
        count++;
        }
    }
    
    printf("%d",count);

    return 0;
}