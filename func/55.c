    #include <stdio.h>
    #include <stdbool.h>
d
    bool IsLeapYear(int y);
    int monthDays(int m,int y);
    void NextDate(int *d,int *m,int *y){
        if(*d==monthDays(*m,*y) && *m!=12){
            *m+=1;
            *d=1;
        }else if(*d==monthDays(*m,*y)){
            *y+=1;
            *m=1;
            *d=1;
        }else{
        *d+=1;
        }
    }

    int main(){
        while(1){
            int y,m=13,d=32;
            printf("Year: ");
            scanf("%d",&y);
            while(m>12){
                printf("Month: ");
                scanf("%d",&m);
                if(m>12){printf("Yilda 12 oy mavjud!!\n");}
            }
            while(d>monthDays(m,y)){
                printf("Day: ");
                scanf("%d",&d);
                if(d>monthDays(m,y)){
                    printf("Bu oyda %d kun mavjud!!\n",monthDays(m,y));
                }
            }
                NextDate(&d,&m,&y);
                printf("Next date: %d.%d.%d\n\n",d,m,y);
       
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