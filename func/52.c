#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int y){
    if(y%100!=0){return y%4==0;}else{
        return y%400==0;
    }

}

int main(){
    int y;
    while(1){
        printf("Year=");
        scanf("%d",&y);
        if(IsLeapYear(y)==1){
            printf("TRUE\n");
        }else{
            printf("FALSE\n");
        }
    }
}