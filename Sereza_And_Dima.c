#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int cards[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&cards[i]);
    }

    int sereja=0, dima=0;
    int j=0, k=n-1;
    for (int i=0; i<n; i++)
    {
        if (cards[j]>cards[k])
        {
            if (i%2==0)
            {
                sereja+=cards[j];
            }
            else
            {
                dima+=cards[j];
            }
            
            j++;
        }
        else
        {
            if(i%2==0)
            {
                sereja+=cards[k];
            }
            else
            {
                dima+=cards[k];
            }
            
            k--;
        }
    }

    printf("%d %d",sereja,dima);

    return 0;
}