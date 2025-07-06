#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
    int t;
    scanf("%d",&t);

    int n;
    while(t--){
        
        scanf("%d",&n);
        
        int a[n];
        for (int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        int unique=1;
        for (int i=0; i<n-1; i++){
            if (a[i]==a[i+1]){
                unique = 0;
            }
        }

        if (unique){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}