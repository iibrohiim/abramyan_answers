#include <stdio.h>
#include <math.h>
void Power234(double a,double *b,double *c,double *d){
    *b=pow(a,2);
    *c=pow(a,3);
    *d=pow(a,4);
}

int main()
{
   while(1){

    double a,b,c,d;
    printf("a=");
    scanf("%lf",&a); 
    Power234(a,&b,&c,&d);
    printf("%lf^2=%lf\n%lf^3=%lf\n%lf^4=%lf\n",a,b,a,c,a,d);

   }
    return 0;
}