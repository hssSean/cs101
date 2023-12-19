#include <stdio.h>
#include <math.h>
int main(){
int i=1, sign=1;
double t=1,pi=0;
while(fabs(t)>=1e-8){
pi=pi+t;
sign=-sign;
i=i+2;
t=1.0*sign/i;
}
printf("%.5f",4*pi);
}
