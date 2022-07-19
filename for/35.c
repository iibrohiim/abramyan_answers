#include <stdio.h>
int main(){
    int A1=1,A2=2,A3=3;
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("A1=%d\nA2=%d\nA3=%d\n",A1,A2,A3);
    for(int i=4;i<=n;i+=3){

    A1=A3+A2-(2*A1);
    A2=A1+A3-(2*A2);
    A3=A2+A1-(2*A3);
    printf("A%d=%d\nA%d=%d\nA%d=%d\n",i,A1,i+1,A2,i+2,A3);
    }
    return 0;
}