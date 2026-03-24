#include <stdio.h>

int main(){
    int n,m,unit;
    scanf("%d",&n);
    m=0;
    unit=1;
    while (n!=0)
    {
        int ld=n%10;
        if (ld==0)
        {
            ld=1;
        }
        ld = ld*unit;
        n=n/10;
        m=m+ld;
        unit=unit*10;
        
    }
    printf("%d",m);
    return 0;

}