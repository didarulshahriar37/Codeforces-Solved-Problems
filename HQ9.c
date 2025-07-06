#include<stdio.h>

int main(){
    char p;
    int found=0;
    while ((p=getchar())!='\n'){
        if (p == 'H' || p == 'Q' || p == '9'){
            found=1;
        }
    }

    if (found){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}