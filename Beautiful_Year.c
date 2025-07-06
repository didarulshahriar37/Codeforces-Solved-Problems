#include<stdio.h>
int main(){
    int y,year;
    scanf("%d",&y);
    for(year=y+1; year<=10000; year++){
        int p1=year/1000;
        int p2=(year/100)%10;
        int p3=(year/10)%10;
        int p4=year%10;
        if(p1!=p2 && p1!=p3 && p1!=p4 && p2!=p3 && p2!=p4 && p3!=p4){
            printf("%d",year);
            break;
        }
    }
    return 0;
}