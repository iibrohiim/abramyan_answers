    #include <stdio.h>
    int a;

    int quarter(int x,int y);

    int main(){
        while(1){
            int x,y;
            printf("x=");
            scanf("%d",&x);
            printf("y=");
            scanf("%d",&y);
            if(a==0){printf("%d-chorakda joylashgan\n\n",quarter(x,y));}
            
        }
        return 0;
    }

    int quarter(int x,int y){
        if(x>0 && y>0){a=0;return 1;}
        if(x<0 && y>0){a=0;return 2;}
        if(x<0 && y<0){a=0;return 3;}
        if(x>0 && y<0){a=0;return 4;}
    }


