#include <stdio.h>
    int b;
int InvertDigit(int a){
    b=0; 
    while(a!=0){
        b=b*10+(a%10);
        a/=10;
    }
    return b;
}

int main(){
    while(1){
        int a;
        printf("a=");
        scanf("%d",&a);
        InvertDigit(a);
        printf("b=%d\n",b);
    }
    return 0;
}