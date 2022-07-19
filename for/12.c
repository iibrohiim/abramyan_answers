#include <stdio.h>
int main(){
    int n;
    double S=1,a=1.1;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        S*=a;
        a+=0.1;
    }
    printf("S=%.3lf\n",S);
    return 0;
}