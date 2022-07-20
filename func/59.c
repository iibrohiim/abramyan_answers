#include <stdio.h>
#include <math.h>

double a,b,c;
double Leng(double x1,double y1, double x2,double y2);
double Perim(double xa,double ya,double xb,double yb,double xc,double yc);
double Area(double xa,double ya,double xb,double yb,double xc,double yc);
double dist(double xa,double ya,double xb,double yb,double xp,double yp);

int main(){
    double xa,ya,xb,yb,xc,yc,xp,yp;
    while(1){
        printf("A(x,y)=");
        scanf("%lf,%lf",&xa,&ya);
        printf("B(x,y)=");
        scanf("%lf,%lf",&xb,&yb);
        printf("C(x,y)=");
        scanf("%lf,%lf",&xc,&yc);
        printf("P(x,y)=");
        scanf("%lf,%lf",&xp,&yp);
        printf("D(P,AB)=%lf\n\n",dist(xa,ya,xb,yb,xp,yp));
        printf("D(P,BC)=%lf\n\n",dist(xb,yb,xc,yc,xp,yp));
        printf("D(P,AC)=%lf\n\n",dist(xa,ya,xc,yc,xp,yp));
    }
}

double Leng(double x1,double y1, double x2,double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double Perim(double xa,double ya,double xb,double yb,double xc,double yc){
    a=Leng(xa,ya,xb,yb);
    b=Leng(xb,yb,xc,yc);
    c=Leng(xa,ya,xc,yc);
    return a+b+c;
}

double Area(double xa,double ya,double xb,double yb,double xc,double yc){
        double p=Perim(xa,ya,xb,yb,xc,yc)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
}

double dist(double xa,double ya,double xb,double yb,double xp,double yp){
        return 2*Area(xa,ya,xb,yb,xp,yp)/a;
}