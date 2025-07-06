#include<stdio.h>
#include<string.h>

int main() {
    char name[101];
    scanf("%s",name);

    int len = strlen(name);

    for (int i=0; i<strlen(name); i++)
    {
        for (int j=i+1; j<strlen(name); j++)
        {
            if (name[i] == name[j])
            {
                len--;
                break;
            }
        }
    }

    if (len%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}