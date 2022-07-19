#include <stdio.h>


int InvertDigit(int a);
int IsPalendrom(int N);

int main(){

        while(1){
            int N,C=0;
            for(int i=1;i<=5;i++){
                printf("N%d=",i);
                scanf("%d",&N);
                if(IsPalendrom(N)==1){
                    printf("True\n");
                    C++;
                }else{
                    printf("False\n");
                }
            }
            printf("C=%d\n\n",C);

        }
    return 0;
}


int InvertDigit(int a){
    int b=0;
    while(a!=0){
        b=b*10+(a%10);
        a/=10;
    }
    return b;
}

int IsPalendrom(int N){
    return InvertDigit(N)==N;
}