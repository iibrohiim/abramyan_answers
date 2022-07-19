#include <stdio.h>
int main(){
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    for(a;a<=b;a++){
        printf("%d ",a);
    }
    return 0;
}