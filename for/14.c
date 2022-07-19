#include <stdio.h>
int main(){
    int n,n2=0,a=1;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        n2+=a;
        a+=2;
        printf("%d^2=%d;\n",i,n2);
    }
    return 0;
}