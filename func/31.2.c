#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int digitCount(int k);
int DigitN(int k,int n);
bool isPalindrom(int n); 

int main(){

    while(1){
        int N,C=0;
        for(int i=1;i<=5;i++){
            printf("N%d=",i);
            scanf("%d",&N);
            if(isPalindrom(N)==1){
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

bool isPalindrom(int n){
 int i=1,raqam;
 raqam=digitCount(n);
 for(i;i<=raqam;i++){
    return DigitN(n,i)==DigitN(n,raqam-i+1); 
}
}