#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,n,a,f;
    printf("x1=");
    scanf("%lf",&x1);
    
    printf("x2=");
    scanf("%lf",&x2);
    
    printf("n=");
    scanf("%lf",&n);
    a=fabs(x2-x1);
    a/=n;
    for(int i=1;i<=n+1;i++){
        f=1-sin(x1);
        printf("f(%.1lf)=%.1lf\n",x1,f);
        x1+=a;

    }


    return 0;
}