#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int n=5;
   int arr[5]={3,11,8,5,15};

   for(int i=0;i<n-1;i++){
    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[i],arr[minIndex]);
   }

   printArray(arr,n);

    return 0;
}