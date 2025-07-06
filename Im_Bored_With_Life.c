#include<stdio.h>

int main()
{
    int A, B;
    scanf("%d %d",&A,&B);

    int minimum;
    if (A>B)
    {
        minimum=B;
    }
    else
    {
        minimum=A;
    }

    long long gcd=1;
    for (int i=1; i<=minimum; i++)
    {
        gcd*=i;
    }

    printf("%lld",gcd);

    return 0;
}