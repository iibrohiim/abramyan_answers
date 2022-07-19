#include <stdio.h>
int main(){
    int a,b,k=1;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    for(a++;a<b;a++){
        k*=a;
    }
    printf("k=%d\n",k);
    return 0;
}