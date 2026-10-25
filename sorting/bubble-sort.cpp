#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
   for(int i=0;i<size-1;i++){
    bool swapped = false;
    for(int j=0;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
        }
    }

    if(swapped==false){
        break;
    }
   }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
   int arr[5]={34,65,2,5,10};
   int n=5;

   bubbleSort(arr,n);
   printArray(arr,n);

    return 0;
}