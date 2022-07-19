#include <stdio.h>
int main(){
    double a;
    printf("1kg konfet narxi: ");
    scanf("%lf",&a); 
    for(double i=0.1;i<=1;i+=0.1){
        printf("%.1lfkg ----------------- %.lf so`m\n",i,i*a);
    }
    return 0;
}