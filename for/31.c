#include <stdio.h>
int main(){
    double a=2,n;
    printf("n=");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        a=2+(1/a);
        printf("A%d=%.2lf\n",i,a);
    }
    return 0;
}