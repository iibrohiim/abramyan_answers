#include <stdio.h>
#include <math.h>

void Triangle(double a){
    printf("Perimentri=%lf\n",3*a);
    printf("Yuzasi=%lf\n\n",(a*a*sqrt(3))/4);
}
    int main(){
        double A=5,B=8,C=10;
        Triangle(A);
        Triangle(B);
        Triangle(C);
        return 0;
    }