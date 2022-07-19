    #include <stdio.h>

    void minmax(double *x,double *y){
        if(*x>*y){
            double t=*x;
            *x=*y;
            *y=t;
        }
    }

    void sortlnc3(double *a,double *b,double *c){
        minmax(a,b);
        minmax(a,c);
        minmax(b,c);

    }

    int main(){
        while(1){
            double a,b,c;
            printf("a=");
            scanf("%lf",&a);
            printf("b=");
            scanf("%lf",&b);
            printf("c=");
            scanf("%lf",&c);
            sortlnc3(&a,&b,&c);
            printf("\n");
            printf("(%.2lf,%.2lf,%.2lf)\n\n",a,b,c);

        }
        return 0;

    }
    