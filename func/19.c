#include <stdio.h>
#include <math.h>

double cirs(double r);
double rings(double r1,double r2);

int main(){
    while(1){
        double r1,r2;
        printf("R1=");
        scanf("%lf",&r1);
        printf("R2=");
        scanf("%lf",&r2);
        printf("S=%.2lf\n\n",rings(r1,r2));

    }
    return 0;

}

double cirs(double r){
    double Pi=3.1415;
    return Pi*r*r;
}

double rings(double r1,double r2){
    return fabs(cirs(r1)-cirs(r2));
}