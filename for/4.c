#include <stdio.h>
int main(){
    int a;
    printf("1kg konfetning narxi: ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d kg -------------- %d so`m\n",i,i*a);
    }
    return 0;
}