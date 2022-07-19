#include <stdio.h>
int main(){
    int n,n1=1,S=0;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        n1*=i;
        S+=n1;
    }
    printf("S=%d",S);
    return 0;
}