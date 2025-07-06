#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int p[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }

    int total=0;
    for (int i=0; i<n; i++)
    {
        total += p[i];
    }

    printf("%.12f",(float) total/n);
    return 0;
}