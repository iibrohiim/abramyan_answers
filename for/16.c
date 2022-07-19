#include <stdio.h>
int main(){
    int n;
    double a,an=1;
    printf("a=");
    scanf("%lf",&a);
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        an*=a;
    printf("%.2lf^%d=%.2lf;\n",a,i,an);
    }
    return 0;
}