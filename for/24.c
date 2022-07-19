#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double x,ishora=-1,n1=1,S=1;
    printf("x=");
    scanf("%lf",&x);
    printf("n=");
    scanf("%d",&n);
    
    
    for(int i=2;i<=2*n;i+=2){
    n1*=i*(i-1);
    S+=ishora*pow(x,i)/n1;
    ishora*=-1;
    }
    printf("S=%.3lf\n",S);

    return 0;

}