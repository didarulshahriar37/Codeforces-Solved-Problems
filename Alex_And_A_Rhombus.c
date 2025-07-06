#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i, sum=0, cell;
    for (i=0; i<n; i++)
    {
        sum+=i; 
    }

    cell=(4*sum)+1;
    printf("%d",cell);

    return 0;
}