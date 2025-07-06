#include<stdio.h>
#include<string.h>

int main() {

    char situation[101];
    scanf("%s",&situation);

    int count=1;
    for (int i=1; i<=strlen(situation); i++) {
        if (situation[i]==situation[i-1]) {
            count++;

            if (count>=7) {
                printf("YES");
                return 0;
            }
        }
        else {
            count = 1;
        }   
    }

    printf("NO");

    return 0;
}
