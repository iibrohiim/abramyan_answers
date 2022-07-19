#include <stdio.h>

    
int addRightDigit(int K,int R){
    return K*10+R;
}
int main(){
    while(1){
        int a,K,R;
        printf("K=");
        scanf("%d",&K);
        printf("R=");
        scanf("%d",&R);

        a=addRightDigit(K,R);
        printf("%d\n",a);
    }
    return 0;
}