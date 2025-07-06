#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i[101];
    for(int j=0; j<n; j++){
        scanf("%d",&i[j]);
    }
    int easy=1;
    for(int j=0; j<n; j++){
        if(i[j]==1){
            easy=0;
            break;
        }
    }
    if(easy){
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    return 0;
}