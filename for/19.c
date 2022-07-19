#include <stdio.h>
int main(){
    int n,n1=1;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        n1*=i;
    }
    printf("%d!=%d",n,n1);
    return 0;
}