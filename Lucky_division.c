#include<stdio.h>
int main(){
    int lucky_digit[]={4,7,47,74,444,447,474,477,744,747,774,777};
    int n;
    scanf("%d",&n);
    int LUCKY=0;
    for(int i=0; i<12; i++){
        if(n%lucky_digit[i]==0){
            LUCKY = 1;
            break;
        }
    }
    if(LUCKY){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}