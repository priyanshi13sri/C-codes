#include<stdio.h>
int main()
{
      int n;
      printf("Input the number of terms:");
      scanf("%d",&n);
      int i,a,b,c; 
      a=0;
      b=1;
      printf("The series is: 0 1 ");
      for(i=0;i<=n;i++){
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
      }
      
      return 0;
}
