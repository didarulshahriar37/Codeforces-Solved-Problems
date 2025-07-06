#include<stdio.h>

int main()
{
    int t,hour,min;

    scanf("%d",&t);

    for ( int i=0 ; i<t ; i++ )
    {
        scanf("%d %d",&hour,&min);

        if ( hour < 24 ){
            printf("%d\n",((23-hour)*60)+(60-min));
        }
    }

    return 0;
}