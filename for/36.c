#include <stdio.h>
#include <math.h>
int main(){
    int n,k,S=0;
    printf("n=");
    scanf("%d",&n);
    printf("k=");
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        S+=pow(i,k);
    }
    printf("S=%d",S);
    return 0;
}