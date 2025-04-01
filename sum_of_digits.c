// AIM : Write a Program to print the sum of digits of a given number. 



#include <stdio.h>
#include <conio.h>
int main ()
{
    int no , temp , sum ;
    printf("Input a number : "); 
    scanf("%d" , &no ); 
    
    temp = no; 

    while(temp>0) 
    {
        sum = sum + temp%10; 
        temp = temp/10;
        sum=sum+temp*temp*temp;
    }
    

    printf("%d is sum of digits of %d number.\n" , sum , no ); 

    return 0; 
}

