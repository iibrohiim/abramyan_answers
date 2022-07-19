#include <stdio.h>
double cirs(double r){
    double Pi=3.1415;
    return Pi*r*r;
}
int main(){
    while(1){
        double r;
        printf("R=");
        scanf("%lf",&r);
        printf("S=%.3lf\n\n",cirs(r));

    }
    return 0;
}
