/* 
write a program to implement the following operation on array:
a)average  -> for( ){ sum=sum+arr[i] average=sum/size}
b)insertion -> bigenerfor(i=n;i>=0;i--){ arr[i+1]=arr[i] n++} #define size  int n; arr[0]=15 last->arr(n+1)=item n++ middle-> for(i=n;i>=0;i--) arr[0]=item
c)deletion
d)searching(ls&bs)
e)display
f)reverse
g)merging

*/
#include <stdio.h>

float findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  
    }
    return (float)sum / size;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    float average = findAverage(arr, size); 

    printf("Average: %.2f\n", average);
    return 0;
}

