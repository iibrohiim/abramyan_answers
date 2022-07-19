#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double a,an,S=1;
    printf("a=");
    scanf("%lf",&a);
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        an=pow(-a,i);
        S+=an;
        an=fabs(an);
    printf("%.2lf^%d=%.2lf;\n",a,i,an);
    }
    printf("S=%.2lf\n",S);
    return 0;
}