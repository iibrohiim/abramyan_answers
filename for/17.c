#include <stdio.h>
int main(){
    int n;
    double a,an=1,S=1;
    printf("a=");
    scanf("%lf",&a);
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        an*=a;
        S+=an;
    printf("%.2lf^%d=%.2lf;\n",a,i,an);
    }
    printf("S=%.2lf\n",S);
    return 0;
}