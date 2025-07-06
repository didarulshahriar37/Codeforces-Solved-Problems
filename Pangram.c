#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d",&n);

    char str[n];
    int count[26]={0};
    scanf("%s",str);

    for (int i=0; i<n; i++){
        count [tolower(str[i])-'a']++;
    }

    int true = 1;
    for (int i=0; i<26; i++){
        if (count[i] == 0){
            true = 0;
            break;
        }
    }

    if (true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}