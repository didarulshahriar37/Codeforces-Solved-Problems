#include<stdio.h>

int main()
{
    int s,n;
    scanf("%d %d",&s,&n);

    int x[10001],y[10001];
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }

    int defeated=0;
    for (int i=0; i<n; i++)
    {
        if (s>x[i] && x[i]!=0)
        {
            s+=y[i];
            x[i]=0;
            i=-1;
            defeated++;
        }
    }

    if (defeated == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}