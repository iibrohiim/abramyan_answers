#include <stdio.h>
    int f;
int Fact2(int N){
    f=1;
    int i=1;
    for(N;i<=N;N-=2){
        f*=N;
    }
    return f;
}

int main(){
    int n;
    while(1){
        printf("n=");
        scanf("%d",&n);
        Fact2(n);
        printf("%d!!=%d\n",n,f);
    }
    return 0;   
}