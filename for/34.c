#include <stdio.h>
int main(){
    double A1=1,A2=2;
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("A1=%.lf\nA2=%.lf\n",A1,A2);
    for(int i=3;i<=n;i+=2){

    A1=(A1+(2*A2))/3;
    A2=(A2+(2*A1))/3;
    printf("A%d=%lf\nA%d=%lf\n",i,A1,i+1,A2);
    }
    return 0;
}