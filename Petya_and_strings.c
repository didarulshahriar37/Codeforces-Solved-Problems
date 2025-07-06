#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);

    for (int i=0; i<strlen(str1); i++) {
        char low_str1 = tolower(str1[i]);
        char low_str2 = tolower(str2[i]);

        if (low_str1>low_str2) {
            printf("1");
            return 0;
        }

        else if (low_str1<low_str2) {
            printf("-1");
            return 0;
        }
    }

    printf("0");
    return 0;
}