#include<stdio.h>
#include<stdlib.h>

int sort(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main()
{
    int s[4];
    int n=4;
    for (int i=0; i<n; i++){
        scanf("%d",&s[i]);
    }

    qsort(s, n, sizeof(int), sort);

    int count=0;
    for (int i=0; i<n-1; i++){
        if (s[i]==s[i+1]){
            count++;
        }
    }

    printf("%d",count);
    return 0;
}