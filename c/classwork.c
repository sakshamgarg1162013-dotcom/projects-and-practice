#include <stdio.h>

int main() {
    int a[2][3];
    int sum =0;
    printf("enter the elements in the 2d array :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum+=a[i][j];
        }
    }

    printf("the total sum of the elements in the 2d array is : %d",sum);

    return 0;
}
