#include<stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);

    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]<a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    int count=0;
    for (int i=0; i<n; i++) {
        if (a[i]>=a[k-1] && a[i]!=0) {
            count++;
        }
        else {
            break;
        }
    }

    printf("%d",count);
    return 0;
}