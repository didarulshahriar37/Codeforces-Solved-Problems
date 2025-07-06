#include<stdio.h>
#include<stdlib.h>

int sort(const void *a, const void *b)
{
    return (*(int *)a-*(int *)b);
}

int main()
{
    long long n;
    scanf("%lld",&n);

    long long a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }

    qsort(a,n,sizeof(long long),sort);

    long long sum1=0,sum2=0;
    for (int i=0; i<n/2; i++)
    {
        sum1+=a[i];
    }
    for (int i=n/2; i<n; i++)
    {
        sum2+=a[i];
    }

    printf("%lld",sum1*sum1+sum2*sum2);
    return 0;
}