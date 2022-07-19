    #include <stdio.h>
    #include <math.h>

    double triangleP(double a,double b){
        return a+b+sqrt(a*a+(b*b));
    }

    int main(){
        while(1){
            double a,b;
            printf("a=");
            scanf("%lf",&a);
            printf("b=");
            scanf("%lf",&b);
            printf("Perimetr=%.2lf\n\n",triangleP(a,b));
        }
        return 0;
    }