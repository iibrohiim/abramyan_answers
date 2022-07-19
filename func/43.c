#include <stdio.h>
#include <math.h>

double s;
double ln1(double x,double e);

int main(){
    double x,e;
    printf("x=");
    scanf("%lf",&x);

    for(int i=1;i<=3;i++){
        printf("e%d=",i);
        scanf("%lf",&e);
        ln1(x,e);
        printf("ln(1+x)=%lf\n",s);        
    }
    return 0;
}

double ln1(double x,double e){
    double t,i=1,ishora=1;
    s=0;
    for(i;i<=1000;i++){
        t=ishora*pow(x,i)/i;
        ishora*=-1;
        if(fabs(t)>e){
            s+=t;
        }
      }
    return s;
}