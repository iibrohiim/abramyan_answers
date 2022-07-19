#include <stdio.h>
int main(){
    int n;
    double S=0,a=1.1,ishora=1;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        S+=ishora*a;
        a+=0.1;
        ishora*=-1;
    }
    printf("S=%.1lf\n",S);
    return 0;
}