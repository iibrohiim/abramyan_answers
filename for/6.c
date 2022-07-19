#include <stdio.h>
int main(){
    double a;
    printf("1kg konfet narxi: ");
    scanf("%lf",&a); 
    for(double i=1.2;i<=2;i+=0.2){
        printf("%.1lfkg ----------------- %.lf so`m\n",i,i*a);
    }
    return 0;
}