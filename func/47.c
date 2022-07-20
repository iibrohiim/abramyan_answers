#include <stdio.h>

int EKUB(int a,int b);
void Frac1(int a,int b,int *p,int *q){
    *p=a/EKUB(a,b);
    *q=b/EKUB(a,b);
}

int main(){
    int a,b,p,q;
    while(1){
        scanf("%d/%d",&a,&b);
        Frac1(a,b,&p,&q);
        printf("%d/%d",p,q);
    }
}

int EKUB(int a,int b){
    while(a!=0 && b!=0){
        if(a>b){
            a%=b;
        }else if(a==b){return 1;}else{
            b%=a;
        }
    }
    return a+b;
}