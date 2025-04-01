
#include <stdio.h>
void main()
{
int q;
float r, amount,d;

printf("enter the quantity and rate");
scanf("%d %f",&q,&r);
amount =q*r;
if(q>100){
    d=0.10*amount;
    printf("net amount=%f", amount-d);
}
    else{
        printf("net amount is %f" , amount);
    }
}

