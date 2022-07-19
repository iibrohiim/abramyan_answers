#include <stdio.h>
int f2;
int Fib(int n){
    int f1=1,i=3;
    f2=1;

    if(n==1 || n==2){
        return f1;
    }
    for(i;i<=n;i++){
        int t=f2;
        f2+=f1;
        f1=t;
    }
    return f2;
}

int main(){
    int n;
    while(1){
        printf("N=");
        scanf("%d",&n);
        Fib(n);
        printf("%d\n",f2);
    }
    return 0;
}