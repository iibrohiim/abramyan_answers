#include <stdio.h>
int digitCount(int k){
    int c;
    for(c=0;k!=0;c++){
        k/=10;
    }
    return c;
}

int main(){
    int k;
    for(int i=1;i<=5;i++){
        printf("k%d=",i);
        scanf("%d",&k);
        printf("C=%d\n",digitCount(k));
    }
    return 0;
}