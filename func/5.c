#include <stdio.h>
#include <math.h>


void RectPS(int x1,int y1,int x2, int y2){
    int a,b;
    a=fabs(x2-x1);
    b=fabs(y2-y1);
    printf("Perimetri=%d\n",2*(a+b));
    printf("Yuzasi=%d\n\n",a*b);
}

int main(){
    int a=5,b=8,c=10,d=4,e=9;
    RectPS(a,b,c,d);
    RectPS(b,c,d,e);

    return 0;
}