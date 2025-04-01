#include<stdio.h>
int main(){
    int num,sum=0,temp,r;
    printf("Enter any number : \n");
    scanf("%d",&num);
    temp = num; 
    while(num>0){
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
        if(sum==temp){
            printf("the number is armstrong number\n");

        }
        else{
            printf("not a armstrong number\n");
        }
    }
