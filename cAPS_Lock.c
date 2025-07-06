#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char word[101];
    scanf("%s",word);

    int caps = 1;
    for (int i=1; i<strlen(word); i++)
    {
        if (word[i]>='a' && word[i]<='z')
        {
            caps=0;
            break;
        }
    }

    if (caps && word[0]>='a' && word[0]<='z')
    {
        word[0] = toupper(word[0]);

        for(int i=1; i<strlen(word); i++)
        {
            word[i] = tolower(word[i]);
        }
    }

    else if (caps && word[0]>='A' && word[0]<='Z')
    {
        for (int i=0; i<strlen(word); i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    
    printf("%s",word);
    return 0;
}