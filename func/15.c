#include <stdio.h>
void swap(double *a,double *b){
    double  t;
    t=*a;
    *a=*b;
    *b=t;
}
void shiftleft3(double *a,double *b,double *c){
    swap(a,b);
    swap(b,c);

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
        shiftleft3(&a,&b,&c);
        printf("A:%f; B:%f; C:%f\n",a,b,c);
    }
    return 0;
}