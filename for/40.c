#include <stdio.h>
int main()
{
   int a,b,i,i2;
   printf("A=");
   scanf ("%d", &a);
   printf("B=");
   scanf ("%d", &b);
 
   for  (i =1; i<=b-a+1; i++){
      for (i2=1; i2<=i; i2++) {
        printf("%d ",a+i-1);
      }
      printf("\n");
   }
 
   return 0;
}