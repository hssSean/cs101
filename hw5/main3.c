#include <stdio.h>
#define ninemax 9 
int main(){
    int nine_fnt=1;
    for(int i=1;i<=ninemax;i++){
    
        printf("%d*%d=%d\t",nine_fnt,i,nine_fnt*i);
        if(nine_fnt!=ninemax){
            if(i==ninemax){
            i=0;
            nine_fnt++;
            printf("\n");
            }
        }
    }
}
