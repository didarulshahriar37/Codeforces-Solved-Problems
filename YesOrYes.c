#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);

    char s[t];
    while(t--){
        scanf("%s",s);

        int i=0;
        if ((s[i]=='Y'||s[i]=='y') && (s[i+1]=='E'||s[i+1]=='e') && (s[i+2]=='S'||s[i+2]=='s')){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}