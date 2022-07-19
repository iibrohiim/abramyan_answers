#include <stdio.h>
int main(){
    int F1=1,F2=1,n;
    printf("n=");
    scanf("%d",&n);
    printf("F1=%d\nF2=%d\n",F1,F2);
    for(int i=3;i<=n;i+=2){

    F1=F1+F2;
    F2=F1+F2;
    printf("F%d=%d\nF%d=%d\n",i,F1,i+1,F2);
    }
    return 0;
}