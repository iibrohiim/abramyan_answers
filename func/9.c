#include <stdio.h>
void  addleftdigit(int d, int *k){
   int t=10;
   while (*k>t){
    t*=10;
    }
   *k+=d*t;
}
 
int main()
{
    while(1){
    int k,d;
    printf("K:");
    scanf("%d", &k);
    printf("D:");
    scanf("%d", &d);

    addleftdigit(d, &k);
    printf("K: %d\n",k);
   }
    return 0;
}