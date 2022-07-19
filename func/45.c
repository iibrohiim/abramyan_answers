#include <stdio.h>
#include <math.h>

double s;
double Fact(double N);
double FactRev(double N,double a);
double Power4(double x,double a,double e);

int main(){
    double x,a,e;
    printf("x=");
    scanf("%lf",&x);
    printf("a=");
    scanf("%lf",&a);

    for(int i=1;i<=3;i++){
        printf("e%d=",i);
        scanf("%lf",&e);
        Power4(x,a,e);
        printf("%lf\n",s);        
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

double FactRev(double N,double a){
    double f=1,i=1;
    for(i;i<=a;i++){
        f*=N;
        N--;
    }
    return f;
}

double Power4(double x,double a,double e){
    double t,i=1;
    s=1;
    for(i;i<=1000;i++){
        t=FactRev(x,i)*pow(x,i)/Fact(i);
        if(fabs(t)>e){
            s+=t;
        }
      }
    return s;
}