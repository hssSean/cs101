#include <stdio.h>

int main(){
    int tall=8;
    for( int i=1;i<=tall;i++){
        if(i>1)printf("\n");
        for(int j=0;j<tall+i;j++){
            if(j<tall-i){
                printf(" ");
            }
            else{
                if(i%2==0){
                    if(j%2==0){
                        printf(" ");
                    }
                    else printf("%d",i);
                }
                else {
                    if(j%2==0)printf("%d",i);
                    else printf(" ");
                }
            }
        }
    }
    return 0;
}
