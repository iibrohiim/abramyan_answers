    #include <stdio.h>
    #include <math.h>

    double powerA3(double a){
        return pow(a,3);
    }

    int main(){
        while(1){

        double A;
        printf("A=");
        scanf("%lf",&A);

        printf("%.2lf^3=%.2lf\n",A,powerA3(A));
        }
        
        return 0;
    }