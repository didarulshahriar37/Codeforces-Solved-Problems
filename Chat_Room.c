#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",s);
    char word[]="hello";
    int found=0;
    for(int i=0; i<strlen(s)&&found<5; i++){
        if(s[i]==word[found]){
            found++;
        }
    }
    if(found==5){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}