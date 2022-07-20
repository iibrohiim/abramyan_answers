#include <stdio.h>
#include <math.h>

double Leng(double x1,double y1, double x2,double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

int main(){
    double x1,x2,y1,y2;
    while(1){
        printf("A(x,y)=");
        scanf("%lf,%lf",&x1,&y1);
        printf("B(x,y)=");
        scanf("%lf,%lf",&x2,&y2);
        printf("|AB|=%lf\n\n",Leng(x1,y1,x2,y2));
    }
    return 0;
}h