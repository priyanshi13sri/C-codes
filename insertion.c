#include <stdio.h>

#define MAX_SIZE 100  


void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int insertAtBeginning(int arr[], int size, int value) {
   
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    return size + 1;  
}


int insertAtMiddle(int arr[], int size, int value) {
    
     int mid = size / 2;  
    
    for (int i = size; i > mid; i--) {
        arr[i] = arr[i - 1];
    }
    arr[mid] = value;
    return size + 1; 
}


int insertAtEnd(int arr[], int size, int value) {
    
    arr[size] = value;
    return size + 1;  
}


int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; 
    int size = 5;  

    printf("Initial ");
    displayArray(arr, size);

    
    size = insertAtBeginning(arr, size, 5);
    printf("After inserting 5 at beginning ");
    displayArray(arr, size);

    
    size = insertAtMiddle(arr, size, 25);
    printf("After inserting 25 in middle ");
    displayArray(arr, size);

    
    size = insertAtEnd(arr, size, 60);
    printf("After inserting 60 at end ");
    displayArray(arr, size);

    return 0;
}