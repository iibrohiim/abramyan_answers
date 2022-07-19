#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double n1=1,S=1,x;
    printf("x=");
    scanf("%lf",&x);
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        n1*=i;
        S+=pow(x,i)/n1;
    }
    printf("S=%.3lf",S);
    return 0;
}