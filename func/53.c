#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int y);
int monthDays(int m,int y);

int main(){
    while(1){
        int y,m=13;
        printf("Year: ");
        scanf("%d",&y);
        while(m>12){
            printf("Month: ");
            scanf("%d",&m);
            if(m>12){printf("Yilda 12 oy mavjud!!\n");}
        }
        printf("Days: %d\n\n",monthDays(m,y)
);
    }
    return 0;
}


bool IsLeapYear(int y){
    if(y%100!=0){return y%4==0;}else{
        return y%400==0;
    }
}

int monthDays(int m,int y){
    int d;
    if(m==4 || m==6 || m==9 || m==11){
        d=30;
    }else if(m==2){
        if(IsLeapYear(y)==1){
            d=29;
        }else{
            d=28;
        }
    }else{
        d=31;
    }
    return d;
}