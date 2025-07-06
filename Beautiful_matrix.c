#include<stdio.h>
#include<math.h>

int main() {
    int num;
    
    for (int i=1; i<6; i++) {
        for (int j=1; j<6; j++) {
            scanf("%d",&num);

            if (num) {
                printf("%d",abs(3-i)+abs(3-j));
                return 0;
            }
        }
    }
}