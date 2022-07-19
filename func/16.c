#include <stdio.h>

int sign(double x){
   if (x<0){ return -1;}    if (x==0){ return 0;}    if (x>0){ return 1;}
}
 
int main()
{
    double a,b;
    printf("A:");
    scanf("%lf", &a);
    printf("B:");
    scanf("%lf", &b);
 
    printf("%d\n",sign(a)+sign(b));
 
    return 0;
}