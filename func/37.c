#include <stdio.h>

double Power1(double a,double b){
    int i=2;
    double t=a;
    for(i;i<=b;i++){
        a*=t;
    }
    if(b==0){return 1;}
    return a;
}

int main(){
    double a,b;
    printf("B=");
    scanf("%lf",&b);
    for(int i=1;i<=3;i++){
        printf("A%d=",i);
        scanf("%lf",&a);
        printf("%.3lf^%.3lf=%.3lf\n",a,b,Power1(a,b));
    }
    return 0;
}