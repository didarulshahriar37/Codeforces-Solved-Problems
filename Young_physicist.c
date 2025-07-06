#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x[201],y[201],z[201];
    for(int i=0; i<n; i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    int sum_x=0, sum_y=0, sum_z=0;
    for(int i=0; i<n; i++){
        sum_x+=x[i];
        sum_y+=y[i];
        sum_z+=z[i];
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}