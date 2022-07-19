#include <stdio.h>
#include <math.h>


double degToRad(double D){
    return D*M_PI/180;
}

int main(){
    double d;
    
        for(int i=1;i<=3;i++){
            printf("Deg=");
            scanf("%lf",&d);
            double rad=degToRad(d);
            printf("Rad=%lf\n",rad);
        }
    
    return 0;
}

