#include <stdio.h>
#include <math.h>

void MEAN(double a, double b, double *Arifmetik, double *Geometrik){
     *Arifmetik=(a+b)/2;
     *Geometrik=sqrt(a*b);
}

int main()
{
    
    double A=1.1, B=2, C=3.7, D=3.1,Arifmetik,Geometrik;
    
    MEAN(A, B,&Arifmetik,&Geometrik);
    printf("O`rta arifmetik=%.2lf\nO`rta geometrik=%.2lf\n\n",Arifmetik,Geometrik);
    MEAN(A, C,&Arifmetik,&Geometrik);
    printf("O`rta arifmetik=%.2lf\nO`rta geometrik=%.2lf\n\n",Arifmetik,Geometrik);
    MEAN(A, D,&Arifmetik,&Geometrik);
    printf("O`rta arifmetik=%.2lf\nO`rta geometrik=%.2lf\n\n",Arifmetik,Geometrik);
    
    return 0;

}