#include <stdio.h>
int ildizlar_soni(double a,double b,double c){

double d=b*b-(4*a*c);
if(d>0){
    return 2;
}else if(d<0){
    return 0;
}else {
    return 1;
}

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
        printf("Ildizlar soni %d ta\n\n",ildizlar_soni(a,b,c));
    }

    return 0;
}