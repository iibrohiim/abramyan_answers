#include <stdio.h>
#include <math.h>
int main(){
    int n,S=0;
    printf("n=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        S+=pow(n+i,2);
    }
    printf("S=%d\n",S);
    return 0;
}