#include <stdio.h>

int IsPowerN(int k,int n){
    double t=k;
    while(t>=n){
        t/=n;
    }

    return t==1;
}

int main(){
    while(1){
        int n,c=0;
        printf("n=");
        scanf("%d",&n);
        for(int i=1;i<=5;i++){
            int k;
            printf("k%d=",i);
            scanf("%d",&k);
            if(IsPowerN(k,n)==1){
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