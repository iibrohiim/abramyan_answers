#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int isSquare(int k){
    bool a=k==pow(sqrt(k),2);
    
    if(a==1){printf("True\n\n");}else{printf("False\n\n");}
}

int main(){
    while(1){
    int k;
    printf("k=");
    scanf("%d",&k);
    isSquare(k);
}
}
