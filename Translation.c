#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",s);
    char t[101];
    scanf("%s",t);
    int is_equal=1;
    if(strlen(s)!=strlen(t)){
        printf("NO");
        return 0;
    }
    for(int i=0,j=strlen(t)-1; i<strlen(s)&&j>=0; i++,j--){
            if(s[i]!=t[j]){
                is_equal=0;
                break;
            }
    }
    if(is_equal){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}