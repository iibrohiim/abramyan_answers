#include <stdio.h>
int main(){
    int n;
    double n1=1,S=1;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        n1*=i;
        S+=1/n1;
    }
    printf("S=%.3lf",S);
    return 0;
}