#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    int passenger=0,min_capacity=0;
    for(int i=0; i<n; i++){
        passenger+=b[i];
        passenger-=a[i];
        if(passenger>min_capacity){
            min_capacity=passenger;
        }
    }
    printf("%d",min_capacity);
    return 0;
}