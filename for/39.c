#include <stdio.h>
int main(){
    int A,B;
    printf("A=");
    scanf("%d",&A);
    printf("B=");
    scanf("%d",&B);
    for(A++;A<B;A++){
        for(int i=1;i<=A;i++){
            printf("%d ",A);
        }
            printf("\n");
    }
    return 0;
}
