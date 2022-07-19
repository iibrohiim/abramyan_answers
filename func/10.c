#include <stdio.h>

void swap(int *a,int *b){
    int  t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    while(1){

    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    }
    return 0;
}