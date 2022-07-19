#include <stdio.h>

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

int EKUK(int a,int b){
    return a*b/EKUB(a,b);
}

int main(){
    while(1){
        int a,b;
        printf("a=");
        scanf("%d",&a);
        printf("b=");
        scanf("%d",&b);
        printf("EKUK=%d\n",EKUK(a,b));
    }
    return 0;
}