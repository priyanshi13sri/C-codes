// AIM : Write a Program to swap the values of two variables. 



#include <stdio.h>
#include <conio.h>
int main ()
{
    int a,b,t ;
    printf("Input two number : "); 
    scanf("%d %d" , &a ,&b ); 
    
    t = a; 
    a = b; 
    b = t; 

    printf("%d and %d are the swapped numbers.\n" , a , b ); 

    return 0; 
}

