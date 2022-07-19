#include <stdio.h>
#include <math.h>
int main(){
    int N,S=0,a;
    printf("N=");
    scanf("%d",&N);
    a=N;
    for(int i=1;i<=N;i++){
        S+=pow(i,a);
        a-=1;
    }
    printf("S=%d",S);
    return 0;
}