// AIM : Write a Program to convet temperature from degree centigrade to farenheit.
    // F = C * (9/5) + 32  



#include <stdio.h>
#include <conio.h>
int main ()
{
    int c,f ;
    printf("Input degree in celcius : "); 
    scanf("%d" , &c ); 

    f = c * 1.8 + 32; 

    printf("%d degree celcius is %d in farenhite.\n" , c , f );

    return 0; 
}

