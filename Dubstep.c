#include<stdio.h>
#include<string.h>
int main(){
    
    char remix[201];
    scanf("%s",remix);

    for(int i=0; i<strlen(remix); i++){
        if (remix[i]=='W' && remix[i+1]=='U' && remix[i+2]=='B'){
            remix[i]=' ';
            remix[i+1]=' ';
            remix[i+2]=' ';
        }
    }
    printf("%s",remix);
    return 0;
}