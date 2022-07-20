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

int EKUB3(int a,int b,int c){
   return EKUB(EKUB(a,b),c);
}
dddd
int main(){
    while(1){
        int a,b,c;
        printf("a=");
        scanf("%d",&a);
        printf("b=");
        scanf("%d",&b);
        printf("c=");
        scanf("%d",&c);
        printf("EKUB=%d\n",EKUB3(a,b,c));
    }
    return 0;
}