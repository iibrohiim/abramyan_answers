#include <stdio.h>
int main(){
    double a=1,n;
    printf("n=");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        a=(a+1)/i;
        printf("A%d=%lf\n",i,a);
    }
    return 0;
}