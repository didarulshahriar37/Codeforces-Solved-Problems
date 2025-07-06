#include<stdio.h>

int main() {
    int M,N;
    scanf("%d %d",&M,&N);

    int board_area = M * N;

    printf("%d",(int) board_area/2);
    return 0;
}