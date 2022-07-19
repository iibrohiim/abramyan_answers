#include <stdio.h>
#include <math.h>
int main(){
    int a,b,S=0;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    for(a++;a<b;a++){
        S+=pow(a,2);
    }
    printf("S=%d\n",S);
    return 0;
}