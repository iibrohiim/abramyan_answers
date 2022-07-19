#include <stdio.h>
#include <math.h>

double Power1(double a,double b);
double Power2(double a,int n);
double Power3(double a,double n);

int main(){
    double a,n;
        printf("A=");
        scanf("%lf",&a);
        for(int i=1;i<=3;i++){
            printf("N%d=",i);
            scanf("%lf",&n);
            printf("%.3lf^%.3lf=%.3lf\n",a,n,Power3(a,n));
        }
        return 0;
}

double Power1(double a,double b){
    int i=2;
    double t=a;
    for(i;i<=b;i++){
        a*=t;
    }
    if(b==0){return 1;}
    return a;
}

 double Power2(double a,int n){
        int i=2;
        double t=a;
        for(i;i<=fabs(n);i++){
            a*=t;
        }
        if(n>0){return a;}
        if(n<0){return 1/a;}
        if(n==0){return 1;}
        
    }

double Power3(double a,double n){
        if(fmod(n,1)==0){
            return Power2(a,(int)n);
        }else{
            return Power1(a,n);
        }

}