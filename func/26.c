#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int i=0;

int isPower5(int k){
    
    bool a=k==pow(pow(k,0.2),5);
    
    if(a==1){
        printf("True\n");
        i++;
        }else{
        printf("False\n");
    }

}


int main(){
    while(1){

    int n1,n2,n3,n4,n5;
    printf("n1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    printf("n3=");
    scanf("%d",&n3);
    printf("n4=");
    scanf("%d",&n4);
    printf("n5=");
    scanf("%d",&n5);
    isPower5(n1);
    isPower5(n2);
    isPower5(n3);
    isPower5(n4);
    isPower5(n5);
    printf("c=%d\n\n",i);
}
return 0;
}
    
