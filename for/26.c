#include <stdio.h>
#include <math.h>
int main(){
    double x,n,ishora=1,S=0;
    printf("x=");
    scanf("%lf",&x);
    printf("n=");
    scanf("%lf",&n);
    for(int i=1;i<=2*n+1;i+=2){
        S+=ishora*pow(x,i)/i;
        ishora*=-1;
    }
    printf("yig`indi=%lf",S);
    return 0;
}