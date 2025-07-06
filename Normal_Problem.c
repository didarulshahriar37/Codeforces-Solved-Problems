#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d",&t);
    
    char a[101];
    char b[101];
    while (t--) {
        scanf("%s",a);

        int i;
        for (i=0; i<strlen(a); i++) {
            
            b[i] = a[strlen(a)-i-1]; 
            
            if (b[i] == 'p') {
                b[i] = 'q';
            }
            else if (b[i] == 'q') {
                b[i] = 'p';
            }
            else if (b[i] == 'w') {
                b[i] = 'w';
            }
        }
        b[strlen(a)] = '\0';
        printf("%s\n",b);
    }
    return 0;
} 