#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    scanf("%s",s);

    for (int i=0; i<strlen(s); i+=2) {
        for (int j=i+2; j<strlen(s); j+=2) {
            if (s[i]>s[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s",s);
    return 0;
}
