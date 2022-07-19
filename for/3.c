#include <stdio.h>
int main(){
    int a,b,n;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    n=b-a-1;
    for(b--;b>a;b--){
        printf("%d ",b);
    }
    printf("\n");
    printf("%d ta son\n",n);
    return 0;
}