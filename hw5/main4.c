#include <stdio.h>
#define ninemax 9 
int main(){
    int i=12345;
    int prt;
    if(i>=1000){
        int a=i-((i/10)*10);
        int b=((i/1000)*1000-(i/10000)*10000)/1000;
        prt=i-(1000*b)+(1000*a)-a+b;
    }
    else{
        int num=0;
        int a=i-((i/10)*10);
        int count=i;
        do{
            num++;
        }while(count/=10);
        if(num==1){
            prt=i*1000;
        }
        else{
            prt=i-a+(1000*a);
        }
        
    }
    printf("%d",prt);
}
