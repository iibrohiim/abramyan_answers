#include <stdio.h>
#include <math.h>
double Leng(double x1,double y1, double x2,double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double Perim(double xa,double ya,double xb,double yb,double xc,double yc){
    double a,b,c;
    a=Leng(xa,ya,xb,yb);
    b=Leng(xb,yb,xc,yc);
    c=Leng(xa,ya,xc,yc);
    return a+b+c;
}

int main(){
    double xa,ya,xb,yb,xc,yc;
    while(1){
        printf("A(x,y)=");
        scanf("%lf,%lf",&xa,&ya);
        printf("B(x,y)=");
        scanf("%lf,%lf",&xb,&yb);
        printf("C(x,y)=");
        scanf("%lf,%lf",&xc,&yc);
        printf("Perimetr=%lf\n\n",Perim(xa,ya,xb,yb,xc,yc));
    }
}
