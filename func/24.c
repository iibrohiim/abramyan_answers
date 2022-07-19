#include <stdio.h>

int even(int k){
    int a;
    a=k%2;
    if(a==0){printf("True\n\n");}else{printf("False\n\n");}
}

int main(){
    while(1){
    int k;
    printf("k=");
    scanf("%d",&k);
    even(k);
}
}
