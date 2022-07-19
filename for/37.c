#include <stdio.h>
#include <math.h>
int main(){
    int N,S=0;
    printf("N=");
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++){

        S+=pow(i,i);
        
    }
    printf("S=%d",S);
    return 0;
}