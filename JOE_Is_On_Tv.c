#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    double reward=0.0;
    for (int i=1; i<=n; i++)
    {
        reward+=1.0/i;
    }

    printf("%0.12f",reward);

    return 0;
}