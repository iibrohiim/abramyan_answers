#include <stdio.h>
#include <math.h>

int digitCount(int k);
int DigitN(int k,int n);

int main(){
    int k,n;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){
        printf("k%d=",i);
        scanf("%d",&k);
        printf("%d\n",DigitN(k,n));
    }
    return 0;
}


int digitCount(int k){
    int c;
    for(c=0;k!=0;c++){
        k/=10;
    }
    return c;
}

int DigitN(int k,int n){
    if(digitCount(k)<n){
        return -1;
    }else{
    int a=pow(10,digitCount(k)-n);
    return k/a%10;    
    }
}




