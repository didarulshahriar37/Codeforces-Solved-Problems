#include<stdio.h>
int main(){
    int n,count=0;
    while((n=getchar())!='\n'){
        if(n=='4'||n=='7'){
            count++;
        }
    }
    if(count==4||count==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}