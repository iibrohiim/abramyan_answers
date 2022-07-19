    #include <stdio.h>

        int c,s=0;

    void digitCountSum(int a){
        for(c=0;a!=0;c++){
            s+=a%10;
            a/=10;
        }
    }


    int main(){
       while(1){
        int a;

        printf("a=");
        scanf("%d",&a);
        digitCountSum(a);
        printf("Raqamlar soni: %d\nRaqamlar yig`indisi: %d\n",c,s);
        s=0;
       } 
        return 0;

    }