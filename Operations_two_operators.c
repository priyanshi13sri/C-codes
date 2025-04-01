// AIM : Write a Program to compute the addition , subtraction , product , quotent and remainder of two given numbers. 



#include <stdio.h>
#include <conio.h>
int main ()
{
    int a , b , sum , divide , product , rem , subt ;
    printf("Input two numbers : "); 
    scanf("%d %d" , &a , &b ); 

    sum = a+b; 
    subt = a - b; 
    divide = a/b ; 
    rem = a%b ; 
    product = a * b ; 

    printf("Sum of %d and %d is %d.\n" , a , b , sum );
    printf("Subtraction of %d and %d is %d.\n" , a , b , subt );
    printf("Product of %d and %d is %d.\n" , a , b , product );
    printf("Divide of %d and %d is %d.\n" , a , b , divide );
    printf("Remainder of %d and %d is %d.\n" , a , b , rem );



    return 0; 
}