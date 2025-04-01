#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a b c:");
    scanf("%d %d %d", &a, &b, &c);
    if(c*c == a*a+b*b || a*a == b*b+c*c || b*b == c*c+a*a){
        printf("Right angle triangle");
    }
    else{
        printf("Not a right angle triangle");
    }

}