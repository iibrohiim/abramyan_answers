#include <stdio.h>

int IsPrime(int n){
    int i;
    if(n==1){
        return 1;
    }
    else{
    for(i=2;n%i!=0;i++);
    return i==n;
    }
}

int main(){
    while(1){
        int n,k,c=0;
        printf("k=");
        scanf("%d",&k);
        for(int i=1;i<=k;i++){
            printf("n%d=",i);
            scanf("%d",&n);
            if(IsPrime(n)==1){
                printf("True\n");
                c++;
            }else{
                printf("False\n");
            }
        }
        printf("C=%d\n\n",c);
    }
    return 0;
}