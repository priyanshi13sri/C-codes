#include<iostream>
using namespace std;

int main(){
 int arr[5]={5,4,8,3,9};
 int key;
 cout<<"Enter the number to be search:";
 cin>>key;
 for(int i=0;i<5;i++){
    if(arr[i]==key){
        cout<<"Element found!";
        break;
    }
 }
    return 0;
}