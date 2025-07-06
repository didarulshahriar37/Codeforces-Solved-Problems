#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[n];
    scanf("%s",name);
    int count_A=0,count_D=0;
    for(int i=0; i<n; i++){
        if(name[i]=='A'){
            count_A++;
        }
        else{
            count_D++;
        }
    }
    if(count_A>count_D){
        printf("Anton");
    }
    else if(count_D>count_A){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}