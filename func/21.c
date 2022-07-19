    #include <stdio.h>

    int sumRange(int a,int b);
            
    int main(){
        while(1){
            int a,b,c;
            printf("a=");
            scanf("%d",&a);
            printf("b=");
            scanf("%d",&b);
            printf("c=");
            scanf("%d",&c);
            printf("%d va %d orasidagi sonlar yig`indisi %d\n\n",a,b,sumRange(a,b));
            printf("%d va %d orasidagi sonlar yig`indisi %d\n\n",b,c,sumRange(b,c));

        }
        return 0;   
    }

    int sumRange(int a,int b){
        int n=0;
        a+=1;
        for(a;a<b;a++){
            n+=a;
        }
        return n;
    }