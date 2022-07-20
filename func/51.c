#include <stdio.h>

int incTime(int h,int m,int s){
    return h*3600+(m*60)+s;
}

int main(){
    int h,m,s;
    while(1){
        printf("H=");
        scanf("%d",&h);
        printf("M=");
        scanf("%d",&m);
        printf("S=");
        scanf("%d",&s);
        printf("T=%d\n",incTime(h,m,s));
    }
    return 0;
}
