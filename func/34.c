#include <stdio.h>
    int f;
int Fact(int N){
    f=1;
    int i=1;
    for(i;i<=N;i++){
        f*=i;
    }
    return f;
}

int main(){
    int n;
    while(1){
        printf("n=");
        scanf("%d",&n);
        Fact(n);
        printf("%d!=%d\n",n,f);
    }
    return 0;
}