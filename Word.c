#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[101];
    scanf("%s",s);
    int len=strlen(s);
    int upper=0;
    for(int i=0; i<len; i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
    }
    if(upper>(len/2)){
        for(int i=0; i<len; i++){
            s[i]=toupper(s[i]); 
        }
    }
    else{
        for(int i=0; i<len; i++){
            s[i]=tolower(s[i]);
        }
    }
    printf("%s",s);
    return 0;
}