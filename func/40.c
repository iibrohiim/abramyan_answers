#include <stdio.h>
#include <math.h>

double s;
double Fact(double N);
double exp1(double x,double e);

int main(){
    double x,e;
    printf("x=");
    scanf("%lf",&x);

    for(int i=1;i<=3;i++){
        printf("e%d=",i);
        scanf("%lf",&e);
        exp1(x,e);
        printf("exp=%lf\n",s);        
    }
    return 0;
}

double Fact(double N){
    double f=1;
    double i=1;
    for(i;i<=N;i++){
        f*=i;
    }
    return f;
}

double exp1(double x,double e){
    double t,i=1;
    s=1;
    for(i;i<=1000;i++){
        t=pow(x,i)/Fact(i);
        if(t>e){
            s+=t;
        }
      }
    return s;
}