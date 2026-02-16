#include <stdio.h>

int main() {
    int a[5]={5,3,1,4,2},i,j,temp;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
