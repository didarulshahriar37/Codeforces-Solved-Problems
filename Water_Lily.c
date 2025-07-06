#include<stdio.h>
#include<math.h>

int main() 
{
    double H,L;
    scanf("%lf %lf",&H,&L);

    double depth = (pow(L,2)-pow(H,2))/(2*H);

    printf("%.13f",depth);
    return 0;
}