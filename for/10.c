#include <stdio.h>
int main(){
    double n,S=0;
    printf("n=");
    scanf("%lf",&n);
    for(double i=1;i<=n;i++){
        S+=1/i;
    }
    printf("S=%.3lf\n",S);
    return 0;
}