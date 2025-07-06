#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int got_gifts[n];
    for (int i=0; i<n; i++){
        scanf("%d",&got_gifts[i]);
    }
    int gave_gifts[n];
    for (int i=0; i<n; i++){
        gave_gifts[got_gifts[i]-1] = i+1;
    }

    for (int i=0; i<n; i++){
        printf("%d ",gave_gifts[i]);
    }
    return 0;
}