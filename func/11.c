#include <stdio.h>
 
void minmax(double *x,double *y){
    if(*x>*y){
        double t=*x;
        *x=*y;
        *y=t;
    }
}
int main(){
    while(1){
        double a,b,c,d;
        printf("a=");
        scanf("%lf",&a);
        printf("b=");
        scanf("%lf",&b);
        printf("c=");
        scanf("%lf",&c);
        printf("d=");
        scanf("%lf",&d);
        minmax(&a,&b);
        minmax(&c,&d);
        minmax(&a,&c);
        minmax(&b,&d);
        printf("min: %.2lf\nmax: %.2lf\n",a,d);
    }
    return 0;
}