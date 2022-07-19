#include <stdio.h>

double Calc(double A,double B,int Op);

int main(){
    printf("Iltimos amallarni bajarish uchun 1-4 gacha sonlarni kiriting: \n\nN1----ayirish\nN2----ko`paytirish\nN3----bo`lish\nN4----qo`shish\n\n");
    while(1){
        int Op;
        double A,B;
        printf("A: ");
        scanf("%lf",&A);
        printf("B: ");
        scanf("%lf",&B);
        printf("Op: ");
        scanf("%d",&Op);
        printf("%.2lf",A);
        if(Op==1){printf("-");}
        if(Op==2){printf("*");}
        if(Op==3){printf("/");}
        if(Op==4){printf("+");}
        printf("%.2lf=%.2lf\n\n",B,Calc(A,B,Op));
    }
    return 0;
}

double Calc(double A,double B,int Op){
    if(Op==1){return A-B;}
    if(Op==2){return A*B;}
    if(Op==3){return A/B;}
    if(Op==4){return A+B;}
}