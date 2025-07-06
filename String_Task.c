#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char word[101];
    scanf("%s",word);

    for (int i=0; i<strlen(word); i++) {
        char letters = tolower(word[i]);
        if (letters == 'A' || letters == 'a' || letters == 'E' || letters == 'e' || letters == 'I' || letters == 'i' || letters == 'O' || letters == 'o' || letters == 'U' || letters == 'u' || letters == 'Y' || letters == 'y') {
            continue;
        }
        printf(".%c",letters);
    }
    return 0;
}