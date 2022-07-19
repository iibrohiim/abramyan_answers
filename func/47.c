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



int main(){
    while(1){
        int a,b;
        printf("a=");
        scanf("%d",&a);
        printf("b=");
        scanf("%d",&b);
        printf("EKUB=%d\n",EKUB(a,b));
    }
    return 0;
}