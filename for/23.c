#include <stdio.h>
#include <math.h>
int  main(){
    int n;
    double x,ishora=-1,n1=1,S;
    printf("x=");
    scanf("%lf",&x);
    printf("n=");
    scanf("%d",&n);
    S=x;
    
    for(int i=3;i<=2*n+1;i+=2){
    n1*=i*(i-1);
    S+=ishora*pow(x,i)/n1;
    ishora*=-1;
    }
    printf("S=%.3lf\n",S);

    return 0;

}