#include <stdio.h>
#include <math.h>

double RadToDeg(double R){
    return R*180/M_PI;
}

int main(){
    double r;
    
        for(int i=1;i<=3;i++){
            printf("Rad=");
            scanf("%lf",&r);
            double deg=RadToDeg(r);
            printf("Deg=%lf\n",deg);
        }
    
    return 0;
}

