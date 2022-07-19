#include <stdio.h>
int main()
{
    float x;
    printf("X=");
    scanf ("%f", &x);
 
   int n;
   printf("N=");
   scanf ("%d", &n);
 
 
   float t1=1,t2=1,r=1,p=1;
   int i;
   for  (i =1; i<n; ++i){
      t1 *= 2*i-3;
      t2 *=2*i;
      p *=(-1)*x;
      r += t1*p/t2;
   }
   printf("%f \n ",r);
 
   return 0;
}