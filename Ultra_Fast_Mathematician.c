#include<stdio.h>
#include<string.h>

int main(){
    char x[101], y[101];
    scanf("%s",x);
    scanf("%s",y);

    char answer[101]; 
    int length = strlen(x);
    for (int i=0; i<length; i++){
        if (x[i]==y[i]){
            answer[i] = '0';
        }
        else{
            answer[i]='1';
        }
    }
    answer[length]='\0';
   
    printf("%s",answer);

    return 0;
}