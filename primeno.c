#include <stdio.h>
int main()
{
    int n,i,count = 0;
    printf("Input a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if (n%i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("PRIME NO"); 
    }
    else 
    {
        printf("NOT PRIME NUMBER"); 
    }
    return 0; 
}
